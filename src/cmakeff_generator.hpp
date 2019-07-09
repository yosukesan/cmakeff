
#pragma once

#include <string>
#include <experimental/filesystem>
#include <vector>

using namespace std;

namespace fs = experimental::filesystem;

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
