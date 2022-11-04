//2-7
#include <iostream>
using namespace std;
void convert(int a, int b) { cout << a << " : " << b << endl; };
int main()
{
	cout << "Enter the number of hours: ";
	int h, m;
	cin >> h;
	cout << "Enter the number of minutes: ";
	cin >> m;
	convert(h, m);
	return 0;
}