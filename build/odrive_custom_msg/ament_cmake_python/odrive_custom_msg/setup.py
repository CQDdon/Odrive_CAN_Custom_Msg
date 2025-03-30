from setuptools import find_packages
from setuptools import setup

setup(
    name='odrive_custom_msg',
    version='0.0.0',
    packages=find_packages(
        include=('odrive_custom_msg', 'odrive_custom_msg.*')),
)
