// chapter_03 solutions of the exercises
//3.
#include <iostream>
using namespace std;

int main() {
	int degree, minute, second;
	const double DEG_MIN = 60.0;
	const double MIN_SEC = 60.0;
	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;

	// conver to symbolic constants
	double degrees = degree + minute / DEG_MIN + second / MIN_SEC / DEG_MIN;
	cout << degree << " degrees, " << minute << " minutes," << \
		second << " seconds = " << degrees << " degrees." << endl;
	return 0;
}