#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	string input = "reddeadredemption";
	map<char, int> collection;

	for (size_t i = 0; i < input.size(); i++)
	{
		int occurances = 0;
		for (size_t j = 0; j < input.size(); j++)
		{
			if (input[i] == input[j])
			{
				occurances++;
			}
		}

		//if(!collection.count(input[i]))
		if (collection.find(input[i]) == collection.end())
		{
			collection[input[i]] = occurances;
		}
	}

	for (map<char, int>::iterator itr = collection.begin(); itr != collection.end(); ++itr)
	{
		cout << (*itr).first << " : " << (*itr).second << endl;
	}

}
