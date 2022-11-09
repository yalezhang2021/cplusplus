//6-5
#include <iostream>
using namespace std;
int main()
{
	double tvarp;
	cout << "Enter tvarp: ";
	while (cin >> tvarp && tvarp > 0)
	{
		if (tvarp <= 5000)
			cout << 0 << endl;
		else if (tvarp <= 15000)
			cout << (tvarp-5000) * 0.1 << endl;
		else if (tvarp <= 35000)
			cout << 10000*0.10 + (tvarp-15000) * 0.15 << endl;
		else
			cout << 10000*0.10 + 20000*0.15 + (tvarp-35000) * 0.2 << endl;
		cout << "Enter tvarp: ";
	}
	return 0;
}