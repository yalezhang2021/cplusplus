//2-6
#include <iostream>
using namespace std;
double convert(double);

int main()
{
	cout << "Enter the number of light years: ";
	double l_years;
	cin >> l_years;

	cout << l_years << " light years = " << convert(l_years) <<
		" astronomical units." << endl;
	return 0;
}

double convert(double n)
{
	double x;
	x = n * 63240;
	return x;
}