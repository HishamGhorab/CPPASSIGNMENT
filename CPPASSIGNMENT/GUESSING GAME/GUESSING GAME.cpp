#include <iostream>
using namespace std;

int main()
{
	float secretNumber = 0;
	float input;

	start:
	cout << "guess the secret number from 0-10!" << endl;
	secretNumber = rand() % 11;

	while (true)
	{

		cin >> input;
		while (!std::cin.good())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid input, try again" << endl;
			cin >> input;
		}

		if (input == secretNumber)
		{
			cout << "You have guessed correctly. type 'y' to start again" << endl;
			string input;
			cin >> input;

			if(input == "y")
				goto start;

			break;
		}
		cout << "You have guessed incorrectly" << endl;
	}
}
