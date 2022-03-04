#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// returns true (1) if palindrome
/// </summary>
/// <param name="a"></param>
/// <param name="size"></param>
/// <returns></returns>
bool IsPalindrome(string a, int size)
{
	int iterations = 0; 
	if (size % 2 == 1)
	{
		iterations = size / 2 - 0.5;
	}
	else {
		iterations = size / 2;
	}

	for (size_t i = 0; i < iterations; i++)
	{
		if (a[i] != a[size - 1 - i])
			return false;
	}
	return true;
}

int main()
{
	string input = "eye";
	cout << "Is the number palindorme? " << IsPalindrome(input, input.size()) << endl;
}

