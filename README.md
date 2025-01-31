
# Odrive_Controller

## Mô tả dự án

Gói ROS 2 `Odrive_Controller` được thiết kế để điều khiển và giao tiếp với thiết bị ODrive thông qua giao thức CAN. Gói này bao gồm các node chính để mã hóa, gửi và kiểm tra dữ liệu CAN frame.

---

## Cấu trúc và chức năng các thành phần

### 1. **Các node**

#### `test_node`
- **Chức năng**: 
  - Gửi dữ liệu test đến các topic được định nghĩa.
  - Mô phỏng quá trình gửi dữ liệu từ một nguồn bên ngoài để kiểm tra hoạt động của các node xử lý.
- **Mục đích**: Kiểm tra tính chính xác và sự tương thích giữa các thành phần trong hệ thống.

#### `CAN_sender.cpp`
- **Chức năng**:
  - Nhận dữ liệu CAN frame từ các node khác (ví dụ: `rbc25_ctrl.cpp`).
  - Thực hiện gửi dữ liệu qua giao thức CAN.
  - Trả về trạng thái xác nhận (ACK) đến node nguồn để đảm bảo dữ liệu được gửi thành công.

#### `rbc25_ctrl.cpp`
- **Chức năng**:
  - Đọc dữ liệu từ custom message được publish bởi `test_node`.
  - Chuyển đổi các trường dữ liệu trong message thành CAN frame.
  - Gửi frame qua `CAN_sender.cpp` để gửi dữ liệu thực qua giao thức CAN.
  - Xử lý phản hồi từ `CAN_sender.cpp` để xác nhận trạng thái gửi.

### 2. **File launch**

#### `odrive_controller.launch.py`
- **Chức năng**:
  - Khởi chạy các instance của node `rbc25_ctrl.cpp` với các `node_id` cụ thể (0, 1, 2).
  - Khởi chạy node `CAN_sender.cpp` để nhận và xử lý frame CAN.

---

## Custom Message

### File `msg/ControlData.msg`
Custom message đã được cập nhật với định nghĩa sau:

\`\`\`plaintext
uint8 device_id
float32 input_pos
float32 input_vel
float32 input_torque
\`\`\`

---

## Các vấn đề hiện tại

### 1. **CMakeLists.txt**
- **Vấn đề**: File `CMakeLists.txt` hiện tại **chưa thêm các node (`rbc25_ctrl.cpp`, `CAN_sender.cpp`, `test_node`) vào mục build**.
- **Hướng dẫn sửa lỗi**:
  - Đảm bảo các node được thêm vào `CMakeLists.txt` như sau:
    \`\`\`cmake
    add_executable(rbc25_ctrl src/rbc25_ctrl.cpp)
    ament_target_dependencies(rbc25_ctrl rclcpp std_msgs)

    add_executable(can_sender src/CAN_sender.cpp)
    ament_target_dependencies(can_sender rclcpp std_msgs)

    add_executable(test_node src/test_node.cpp)
    ament_target_dependencies(test_node rclcpp std_msgs)
    \`\`\`

### 2. **Node `rbc25_ctrl.cpp`**
- **Vấn đề**: 
  - Hiện tại node này **đọc message cũ** không có trường `device_id`.
  - Cần cập nhật logic trong `rbc25_ctrl.cpp` để đọc và xử lý trường `device_id` trong custom message mới.
- **Hướng dẫn sửa lỗi**:
  - Thêm logic xử lý `device_id` khi nhận dữ liệu từ topic.

### 3. **File `odrive_controller.launch.py`**
- **Vấn đề**:
  - File launch vẫn còn sử dụng parameter `interface`, tuy nhiên không còn cần thiết trong thiết kế hiện tại.
- **Hướng dẫn sửa lỗi**:
  - Xóa parameter `interface` trong file `odrive_controller.launch.py` như sau:
    \`\`\`python
    Node(
        package='Odrive_Controller',
        executable='rbc25_ctrl',
        name='odrive_controller_0',
        parameters=[{'node_id': 0}]
    )
    \`\`\`

---

