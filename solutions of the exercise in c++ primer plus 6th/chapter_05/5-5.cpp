//5-5 
#include <iostream>
using namespace std;
int main()
{
	const int YEAR = 12;
	const char* month[YEAR]
	{
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	int sum = 0, sale[YEAR];
	for (int i = 0; i < YEAR; ++i)
	{
		cout << "the sales number of " << month[i] << ": ";
		cin >> sale[i]; // should be int
		sum += sale[i];
	}
	cout << "Sum = " << sum << "\n";
	return 0;
}