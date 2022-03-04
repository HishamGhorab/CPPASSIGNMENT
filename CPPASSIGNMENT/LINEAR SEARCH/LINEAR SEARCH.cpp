#include <iostream>

int SearchForNumber(const int *arr, int size, int numToSearch)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == numToSearch)
			return i;
	}
	return -1;
}

int main()
{
	int numArr[] = { 5, 3, 7, 10, 1 };
	int arrSize = sizeof(numArr) / sizeof(numArr[0]);

	std::cout << SearchForNumber(numArr, arrSize, 3) << std::endl;
}