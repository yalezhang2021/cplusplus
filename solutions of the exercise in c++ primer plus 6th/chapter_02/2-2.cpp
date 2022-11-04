//2-2
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a distance in furlongs: ";
	double f_dist;
	cin >> f_dist;

	cout << "distance in yards: " << f_dist * 220 << endl;
	return 0;
}