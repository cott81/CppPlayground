cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project("CppPlayground")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
SET(CMAKE_CXX_FLAGS "-std=c++17 -fPIE")

#add test project
add_subdirectory(HelloWorld)
add_subdirectory(Inheritance)
                    
