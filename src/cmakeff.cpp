
#include "cmakeff.hpp"

void CMakeFF::walk(const fs::path& root_dir, vector<fs::path>* dir_tree)
{
    fs::recursive_directory_iterator dir_iter(root_dir), dir_end;

    for (; dir_iter!=dir_end; ++dir_iter)
            dir_tree->push_back(*dir_iter);
}

/// @input path
/// @output none
/// @return if file extension is ".h" returns true else returns false
bool CMakeFF::is_c_header(const fs::path& path)
{
    string s (path);
    reverse(s.begin(), s.end());
    
    if (fs::status(path).type() == fs::file_type::regular)
        return ("h." == s.substr(0,2));

    return false;
}

/// @input path
/// @output none
/// @return if file extension is ".h" returns true else returns false
bool CMakeFF::is_c_source(const fs::path& path)
{
    string s (path);
    reverse(s.begin(), s.end());
    
    if (fs::status(path).type() == fs::file_type::regular)
        return ("c." == s.substr(0,2));

    return false;
}

/// @input path
/// @output none
/// @return if file extension is ".h", ".hpp" or "hxx" returns true else returns false
bool CMakeFF::is_cpp_header(const fs::path& path)
{
    string s (path);
    reverse(s.begin(), s.end());

    if (fs::status(path).type() == fs::file_type::regular)
        return ("h." == s.substr(0,2) || "pph." == s.substr(0,4) || "xxh." == s.substr(0,4));

    return false;
}

/// @input path
/// @output none
/// @return if file extension is ".c", ".cpp" or ".cxx" returns true else returns false
bool CMakeFF::is_cpp_source(const fs::path& path)
{
    string s (path);
    reverse(s.begin(), s.end());
    
    if (fs::status(path).type() == fs::file_type::regular)
        return ("c." == s.substr(0,2) || "ppc." == s.substr(0,4) || "xxc." == s.substr(0,4));

    return false;
}

/// @input path
/// @output none
/// @return if path is directory returns true else returns false
bool CMakeFF::is_directory(const fs::path& path)
{
    return (fs::status(path).type() == fs::file_type::directory);
}
