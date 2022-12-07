#include <iostream>
#include "test.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "Only one arg can be supplied" << std::endl;
        return 1;
    }
    std::cout << argv[1] << std::endl;
    std::cout << "RanomVal: "<< GetNumber<float>() << std::endl;
    std::cout << "RanomVal: "<< GetNumber<double>() << std::endl;
    std::cout << "RanomVal: "<< GetNumber<std::size_t>() << std::endl;
}