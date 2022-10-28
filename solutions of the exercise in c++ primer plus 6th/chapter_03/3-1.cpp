// chapter_03 solutions of the exercises
//1.
#include <iostream>
using namespace std;

int main() {
	cout << "Please give your height in integer inches: " << endl;
	const int cov_inch_feet = 12; //1 feet = 12 inch
	int height;

	cin >> height;
	int feet = height / cov_inch_feet;
	int inch = height % cov_inch_feet;
	cout << "Your height is " << feet << " feet, " << inch << " inch." << endl;
	return 0;
}