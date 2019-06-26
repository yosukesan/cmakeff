
#include <iostream>
#include <experimental/filesystem>

using namespace std;

namespace fs = experimental::filesystem;

void walk()
{
    fs::directory_iterator dir_iter("."), dir_end;
    for (; dir_iter!=dir_end; ++dir_iter)
            cout << *dir_iter << endl;
}
