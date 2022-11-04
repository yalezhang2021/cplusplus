//5-8
#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
	cout << " Enter words (to stop, type the word done):\n";
	char text[20];
	cin >> text;
	int count = 0;
	while (strcmp(text, "done"))
	{
		cin >> text;
		count++;
	}
	cout << "You entered a total of " << count << " words." << endl;
	return 0;
}