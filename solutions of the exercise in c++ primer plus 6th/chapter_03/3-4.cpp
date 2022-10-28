// chapter_03 solutions of the exercises
//4.
#include <iostream>
using namespace std;

int main() {
	int day, hour, minute, second, seconds, temp;
	const int HOUR_DAY = 24;
	const int MIN_HOUR = 60;
	const int SEC_MIN = 60;
	cout << "Enter the number of seconds: " << endl;
	cin >> seconds;
	temp = seconds;
	second = seconds % SEC_MIN;
	temp /= SEC_MIN;
	minute = temp % MIN_HOUR;
	temp /= MIN_HOUR;
	hour = temp % HOUR_DAY;
	day =  temp / HOUR_DAY;
	cout << seconds << " seconds = " << day << " days, " << \
		hour << " hours, " << minute << " minutes, " << second\
		<< " seconds." << endl;
	return 0;
}