#include <iostream>

int AbsoluteDiff(int a, int b)
{
    if (a < 0)  a *= -1;
    if (b < 0)  b *= -1;
    return a + b;
}

int main()
{
    std::cout << AbsoluteDiff(-6, 4) << std::endl;
}

