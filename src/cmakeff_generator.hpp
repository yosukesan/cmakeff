
#pragma once

#include <string>

#if __GNUC__ < 8
#include <experimental/filesystem>
#else
#include <filesystem>
#endif

#include <vector>

using namespace std;

#if __GNUC__ < 8
namespace fs = experimental::filesystem;
#else
namespace fs = std::filesystem;
#endif

namespace cmakeff
{

class __Generator
{
    string cmake_minimum_required(const string& version);
    string project(const string& name);
    string include_directories(const string& project, vector<fs::path>& dirs);
    string add_executable(const string& project, vector<fs::path>& dirs);
    string add_library(const string& project, vector<fs::path>& dirs);
public:    
    string generate();
};

}
