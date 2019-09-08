
cmakeff: An automatic CMakeLists.txt generator 
----------------------------------------------

# Abstract

* CMakeLists.txt generation application.
* Automatically detect all *.cpp and *.hpp files in subdirectories and generates CMakeLists.txt.

# Build Requirement 

* C++ compiler. Need to be C++17 capable
* cmake 3.7 or later

# How to Build

## Unix Like System (Unix, Linux, Mac)

```
cd cmakeff
mkdir build; cd build
cmake ../src -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS_DEBUG="-Wall -W --std=c++17  -lstdc++fs" -DCMAKE_CXX_FLAGS_RELEASE="-W -Wall --std=c++17  -lstdc++fs" && make
```
cd cmakeff

## Windows

* CUI build


```
cd cmakeff
mkdir build; cd build
cmake -G "NMake Makefiles" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS_DEBUG="-Wall -W --std=c++17  -lstdc++fs" -DCMAKE_CXX_FLAGS_RELEASE="-W -Wall --std=c++17  -lstdc++fs" ../src && make
```
cd cmakeff

* For Visual Studio

```
cd cmakeff
mkdir build; cd build
cmake ../src -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS_DEBUG="-Wall -W --std=c++17  -lstdc++fs" -DCMAKE_CXX_FLAGS_RELEASE="-W -Wall --std=c++17  -lstdc++fs" && make
```
cd cmakeff

# Author

Yosuke OTSUKI (Original)
