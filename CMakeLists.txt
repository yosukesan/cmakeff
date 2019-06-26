
cmake_minimum_required(VERSION 3.7)

project (cmakeff)

add_executable(cmakeff main.cpp)

target_link_libraries(cmakeff libstdc++fs.a)
