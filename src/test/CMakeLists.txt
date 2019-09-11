
cmake_minimum_required(VERSION 3.7)

project (test_cmakeff)

include_directories(../)

add_executable(test_cmakeff main.cpp)

target_link_libraries(test_cmakeff ${PROJECT_BINARY_DIR}/../libcmakeff.a libstdc++fs.a)

