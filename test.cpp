#include <cstdlib>

template <typename T>
T GetNumber()
{
    return static_cast<T>(std::rand());
}

#define INSTANTIATE(TYPE) template TYPE GetNumber();

INSTANTIATE(std::size_t);
INSTANTIATE(float);
INSTANTIATE(double);