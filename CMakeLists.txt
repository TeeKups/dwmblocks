# Guaranteed to work with this. Likely works with earlier versions as well.
# Feel free to try, but I'm not going to.
cmake_minimum_required(VERSION 3.25)
project(dwmblocks VERSION 6.2)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED YES)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pedantic -Wall -Os")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DVERSION=${VERSION}")

add_executable(dwmblocks
    dwmblocks.c
)

target_link_libraries(dwmblocks
    X11
)
