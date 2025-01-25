cmake_minimum_required(VERSION 3.10)  # You can specify a version that suits your needs
project(elzero_cpp)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Use GLOB to find all .cpp files in the current directory
file(GLOB SOURCES "*.cpp")

# Add the executable with all found source files
add_executable(elzero_cpp ${SOURCES})
