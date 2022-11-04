// 5-1
#include <iostream>
using namespace std;
int main()
{
	int start, end, sum = 0;
	cout << "Enter start from: ";
	cin >> start;
	cout << "Enter end number: ";
	cin >> end;

	for (start; start <= end; ++start)
	{
		sum += start;
	}
	cout << sum << endl;
	return 0;
}