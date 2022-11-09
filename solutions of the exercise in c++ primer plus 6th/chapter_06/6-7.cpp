//6-7
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string words;
	int vowels_n = 0, cons_n = 0, other_n = 0;
	cout << "Enter words (q to quit):\n";

	while (cin >> words && words != "q")
	{
		//cout << words << endl; // every word divided by space
		if (isalpha(words[0]))
		{
			switch (words[0])
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				vowels_n++;
				break;
			default:
				cons_n++;
			}
		}
		else
			other_n++;
	}
	cout << vowels_n << " words beginning with vowels.\n"
		<< cons_n << " words beginning with consonants.\n"
		<< other_n << " others." << endl;

	return 0;
}