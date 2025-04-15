cmake_minimum_required(VERSION 3.5.1)

#project(HelloWorld)
set(PROJECT_NAME HelloWorld)

# Set output directories for build artifacts
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME}/bin)

set(SRC
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SRC} )
