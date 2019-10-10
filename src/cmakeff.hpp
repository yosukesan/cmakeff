
#pragma once

#include <iostream>

#if __GNUC__ < 8
#include <experimental/filesystem>
#else
#include <filesystem>
#endif

#include <vector>
#include <memory>
#include <string>

#include "cmakeff_generator.hpp"

using namespace std;

#if __GNUC__ < 8
namespace fs = experimental::filesystem;
#else
namespace fs = std::filesystem;
#endif

namespace cmakeff
{

class CMakeFF{

    __Generator _generator;

public:

    __Generator generator(){return _generator;}
    static void walk(const fs::path& root_dir, vector<fs::path>* dir_tree);

    static bool is_c_header(const fs::path& path);
    static bool is_c_source(const fs::path& path);
    static bool is_cpp_header(const fs::path& path);
    static bool is_cpp_source(const fs::path& path);
    static bool is_directory(const fs::path& path);
};

}

#include "parser.hpp"
#include "parser_c++.hpp"

