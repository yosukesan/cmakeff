
#include <iostream>
#include <fstream>

#include "cmakeff.hpp"

using namespace cmakeff;


void check_file_read(const string& source_file);

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

    //for (auto i: paths)
    //    if (CMakeFF::is_cpp_source(i))
    //        check_file_read(i);

    // extract all non system include here

    ofstream ofs;
    ofs.open("CMakeLists.txt");
    ofs << cmakeff.generator().generate();
    ofs.close();

    return 0;
}

void check_file_read(const string& source_file)
{
    ifstream ifs(source_file, ifstream::in);

    size_t length(0);

    ifs.seekg(0, ios::end);
    length = ifs.tellg();
    ifs.seekg(0, ios::beg);

    char buffer[length];
    cout << "Reading " << source_file << endl;
    ifs.read(buffer, length);
    ifs.close();

    Parser<ParserCpp> cpp;
    cpp.parse(string(buffer));
}
