
#include "parser.hpp"
#include "parser_c++.hpp"

namespace cmakeff
{

//template <typename Derived>
//Parser<Derived>::Parser()
//{
//}

template <typename Derived>
void Parser<Derived>::parse(const std::string& input)
{
    Derived::parse(input);
}

template class Parser<ParserCpp>;

}
