// chapter_03 solutions of the exercises
//2.
#include <iostream>
using namespace std;

int main() {
	cout << "Please give your height in feet and inches,\
		and your weight in pounds" << endl;
	int feet, inch, pounds;
	const int INCH_FT = 12;
	const double POUND_KG = 2.2;
	const double METER_INCH = 0.0254;

	cout << "feet: ";
	cin >> feet;
	cout << "\ninch: ";
	cin >> inch;
	cout << "\npounds: ";
	cin >> pounds;

	// convert height in inches/meters
	const int cov_inch_feet = INCH_FT; //1 feet = 12 inch
	double height = METER_INCH *(feet * cov_inch_feet + inch);

	// pounds to kg
	double weight = pounds / POUND_KG;

	// calculate BMI
	double BMI =  weight / (height*height);
	cout << "BMI: " << BMI << endl;
	return 0;
}