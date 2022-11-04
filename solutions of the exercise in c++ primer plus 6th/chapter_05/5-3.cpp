// 5-3
#include <iostream>
using namespace std;
int main() {
	cout << "type in numbers, type 0 to quit: \n";
	double n, sum = 0.0;
	cin >> n;
	for (int i = 0; n != 0; ++i)
	{
		sum += n;
		cout << sum << endl;
		cin >> n;
	}
	return 0;
}