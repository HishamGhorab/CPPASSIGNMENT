#include <iostream>

/// <summary>
/// returns true (1) if number is even and false (0) if number is false
/// </summary>
/// <param name="value"></param>
/// <returns></returns>
bool EvenOrOdd(int value)
{
    if (value % 2 == 0)
        return true;
    return false;
}

int main()
{
    std::cout << EvenOrOdd(3) << std::endl;
}