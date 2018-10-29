cmake_minimum_required(VERSION 3.12)
project(HelloWorld)
# Set extensions off to disable GNU extensions.
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)

add_executable(HelloWorld main.cpp)