
cmake ../src -DCMAKE_INSTALL_PREFIX=`pwd`/../cmakeff_dev -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS_DEBUG="-Wall -W --std=c++17  -lstdc++fs" -DCMAKE_CXX_FLAGS_RELEASE="-W -Wall --std=c++17  -lstdc++fs"
#cmake ../src -DCMAKE_INSTALL_PREFIX=`pwd`/../cmakeff_dev -DCMAKE_BUILD_TYPE=Debug -DCMAKE_C_COMPILER="clang-7" -DCMAKE_CXX_COMPILER="clang++-7" -DCMAKE_CXX_FLAGS_DEBUG="-lc++fs" -DCMAKE_CXX_FLAGS_RELEASE="-lc+fs" 

make

make install
