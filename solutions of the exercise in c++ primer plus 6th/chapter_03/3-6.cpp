//// chapter_03 solutions of the exercises
//6.
#include <iostream>
using namespace std;
int main() {
	double miles, gallons;
	cout << "How many miles you have driven: ";
	cin >> miles;
	cout << "and how many gallons of fasoline you have used: ";
	cin >> gallons;
	double miles_per_gallon = miles / gallons;
	cout << miles_per_gallon << " miles per gallon." << endl;

	//in European style
	double const ML_KM = 1.60934; // 1 mile = 1.60934 km
	double const GAL_LIT = 3.78541; // 1 gallon = 3.78541 liter
	double kmeter, liter;
	kmeter = miles * ML_KM;
	liter = gallons * GAL_LIT;
	double liter_per_100kmeter = gallons / kmeter * 100;
	cout << "Use " << liter_per_100kmeter << " liters per 100 kilometers." << endl;
	return 0;
}