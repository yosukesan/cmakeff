
#include "cmakeff_generator.hpp"

namespace cmakeff
{

string __Generator::cmake_minimum_required(const string& version)
{
    return "cmake_minimum_required(VERSION" + version + ")\n";
}

string __Generator::project(const string& name)
{
    return "project(" + name + ")\n";
}

string __Generator::include_directories(const string& project, vector<fs::path>& dirs)
{
    return "include_directories(" + project + ")\n"; 
}

string __Generator::add_executable(const string& project, vector<fs::path>& dirs)
{
    return "add_executable(" + project + ")\n";
}

string __Generator::add_library(const string& project, vector<fs::path>& dirs)
{
    return "add_library(" + project + ")\n";
}

//=============================================================================
// public
//=============================================================================

string __Generator::generate()
{
    string project_id("test");
    vector<fs::path> sources;

    return cmake_minimum_required("3.11") +
            project(project_id) +
            add_executable(project_id, sources) +
            add_library(project_id, sources);

}

}
