#include <iostream>
#include <string>

using namespace std;

bool ContainsWord(const string& sentence, const string& wordToSearch);

int main()
{
	string input = "Hello my name is Ada";
	cout << ContainsWord(input, "name") << endl;
}

bool ContainsWord(const string& sentence, const string& wordToSearch)
{
	int wordLength = wordToSearch.size();
	int counter = 0;

	for (size_t i = 0; i < sentence.size(); i++)
	{
		counter++;
		if (sentence[i] == ' ')
		{
			int startIndex = i - counter;
			for (size_t i = 0; i < counter; i++)
			{

			}
		}
	}

	return false;
}


/*
* iterate lineraly count++ when first letter is found
* search index before it and see if its space
* check every letter from there on if it keeps matching the word
* clear as fast as 1 letter doesnt
* return true if all letters are found
* else false
*/