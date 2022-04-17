cmake_minimum_required(VERSION 3.5.1)

set(SRC
    src/main.cpp
    src/Base.cpp
    src/Derived.cpp
)

include_directories("include")

add_executable(inheritance ${SRC} )
