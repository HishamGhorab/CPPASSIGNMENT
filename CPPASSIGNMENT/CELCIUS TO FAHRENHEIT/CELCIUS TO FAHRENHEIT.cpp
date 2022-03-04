#include <iostream>

float CelciusToFarhenhiet(float celciusValue)
{
    return celciusValue * 1.8 + 32;
}


int main()
{
    std::cout << CelciusToFarhenhiet(36) << std::endl;
}
