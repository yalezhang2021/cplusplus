//5-9
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Enter words (to stop, type the word done):\n";
	string text;
	cin >> text;
	int count = 0;
	while (text != "done")
	{
		cin >> text;
		count++;
	}
	cout << "You entered a total of " << count << " words." << endl;
	return 0;
}