
cmake_minimum_required(VERSION 3.7)

project (cmakeff)

add_library(cmakeff
        cmakeff.cpp cmakeff_generator.cpp parser.cpp parser_c++.cpp)

install (TARGETS cmakeff DESTINATION "${CMAKE_INSTALL_PREFIX}/lib")

add_subdirectory(test)
