
#pragma once

#include <iostream>
#include <experimental/filesystem>
#include <vector>
#include <memory>
#include <string>
#include <algorithm>

using namespace std;

namespace fs = experimental::filesystem;

class CMakeFF {
    vector<fs::path> files;

    // store popular extensions in reverse order
    enum class file_extension {
        pph, h, xxh,
        ppc, c, xxc
    };
public:
    static void walk(const fs::path& root_dir, vector<fs::path>* dir_tree);
    static bool is_c_header(const fs::path& path);
    static bool is_c_source(const fs::path& path);
    static bool is_cpp_header(const fs::path& path);
    static bool is_cpp_source(const fs::path& path);
    static bool is_directory(const fs::path& path);
};

