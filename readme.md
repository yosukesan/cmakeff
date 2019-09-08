
cmakeff: An automatic CMakeLists.txt generator 
----------------------------------------------

# Abstract

* CMakeLists.txt generation application.
* Automatically detect all *.cpp and *.hpp files in subdirectories and generates CMakeLists.txt.

# Build Requirement 
-----

* C++ compiler. Need to be C++17 capable
* cmake 3.7 or later

# How to Build
-----

## Unix Like System (Unix, Linux, Mac)

```
cd cmakeff
cd cmakeff
mkdir build; cd build
cmake ../src && make
```
cd cmakeff

## Windows

* CUI build

```
cd cmakeff
cd cmakeff
mkdir build; cd build
cmake -G "NMake Makefiles" ../src && make
```
cd cmakeff

* For Visual Studio

```
cd cmakeff
mkdir build; cd build
cmake ../src && make
```
cd cmakeff

# Author
-----

Yosuke OTSUKI (Original)
