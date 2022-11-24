#include <iostream>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "Only one arg can be supplied" << std::endl;
        return 1;
    }
    std::cout << argv[1] << std::endl;
}