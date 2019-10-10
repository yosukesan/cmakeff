
#pragma once

#include <string>

namespace cmakeff
{
class ParserCpp;

template <typename Derived>
class Parser
{
public:
    void parse(const std::string& input);
};

}
