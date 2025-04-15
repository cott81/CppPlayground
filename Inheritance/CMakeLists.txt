cmake_minimum_required(VERSION 3.5.1)

set(PROJECT_NAME Inheritance)

# Set output directories for build artifacts
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/bin)

set(SRC
    src/main.cpp
    src/Base.cpp
    src/Derived.cpp
)

include_directories("include")

add_executable(${PROJECT_NAME} ${SRC} )
