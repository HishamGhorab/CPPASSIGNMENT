#include <iostream>

int GetLastDigit(int value)
{
    return (value % 10);
}

int main()
{
    std::cout << GetLastDigit(137) << std::endl;
}
