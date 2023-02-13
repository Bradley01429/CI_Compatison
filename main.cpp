#include <iostream>
#include "test.hpp"

// This is a test comment
template<typename T>
void PrintNumberToScreen()
{
    std::cout << "RanomVal: "<< GetNumber<T>() << std::endl;
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "Only one arg can be supplied" << std::endl;
        return 1;
    }
    
    std::cout << argv[1] << std::endl;
    PrintNumberToScreen<float>();
    PrintNumberToScreen<double>();
    PrintNumberToScreen<std::size_t>();
}
