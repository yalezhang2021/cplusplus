//5-6
#include <iostream>
using namespace std;
int main()
{
	const int Year = 3;
	const int Month = 12;
	const char* month[Month]
	{
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	double sales[Year][Month];
	double sum = 0.0;
	for (int i = 0; i < Year; i++)
	{
		for (int j = 0; j < Month; j++)
		{
			cout << "year: " << i << " month: " << month[j] << endl;
			cin >> sales[i][j]; // should be int
			sum += sales[i][j];
		}
	}
	cout << "Sum = " << sum << endl;
	return 0;
}