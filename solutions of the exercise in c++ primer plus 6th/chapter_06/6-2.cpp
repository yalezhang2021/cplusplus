//6-2
#include <iostream>
using namespace std;
int main()
{
	const int MAX = 10;
	double sum = 0.0, average = 0.0, donate;
	int count = 0, i = 0;
	double arr[MAX];
	
	cout << "Enter a number: ";
	for (; i < MAX && cin >> donate; i++)
	{
		arr[i] = donate;
		sum += donate;
		cout << "Enter a number: ";
	}
	if (i != 0)
	{
		average = sum / i;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > average)
				count++;
		}
		cout << "Average = " << average << "; Numbers larger than average: "
			<< count << endl;
	}
	else
		cout << "No data." << endl;
	return 0;
}