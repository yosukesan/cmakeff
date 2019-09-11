
#include <iostream>
#include <fstream>

#include "cmakeff.hpp"
#include "parser.hpp"

using namespace cmakeff;

int main(int argc, char* argv[])
{
    CMakeFF cmakeff;

    if (argc != 2)
    {
        cout << "usage: cmakeff ${root_dir}" << endl;
    }
    const string root_dir (argv[1]);

    vector<fs::path> paths(4096);

    paths[0] = static_cast<fs::path>(argv[1]);
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

    ofstream ofs;
    ofs.open("CMakeLists.txt");
    ofs << cmakeff.generator().generate();
    ofs.close();

    return 0;
}
