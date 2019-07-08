
#include <iostream>

#include "cmakeff.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "usage: cmakeff ${root_dir}" << endl;
    }
    const string root_dir (argv[1]);

    vector<fs::paths> paths(4096);

    paths[0] = static_cast<fs::paths>(argv[1]);
    CMakeFF::walk(root_dir, &paths);

    for (auto i: paths)
    {
        if (CMakeFF::is_cpp_header(i))
            cout << i << endl;

        if (CMakeFF::is_cpp_source(i))
            cout << i << endl;

        if (CMakeFF::is_directory(i))
            cout << i << endl;
    }

    return 0;
}
