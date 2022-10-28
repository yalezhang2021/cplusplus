// chapter_03 solutions of the exercises
//7.
#include <iostream>
using namespace std;
int main() {
	double liter_per_km;
	int mile_per_gallon;
	// european style: liters per 100 km
	cout << "Enter automobile gasolilne consumption figure in european style\
	(liter per 100 km): ";
	cin >> liter_per_km;

	// convert to us style, miles per gallon
	const double LITER_GAL = 3.875; // 1 gallon = 3.875 liters
	const double MIL_KM = 62.14;	// 100km = 62.14 miles
	mile_per_gallon = (MIL_KM * LITER_GAL) / liter_per_km;
	// 19 mpg = 12.4 1/100 km
	// 27 mpg = 8.7 1/100 km
	cout << "aotomobile gasoline consumption in us style: " << mile_per_gallon << endl;
	return 0;
}