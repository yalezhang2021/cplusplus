//5-7
#include <iostream>
#include <string>
using namespace std;

struct Car {
	string make;
	int year;
};

int main() {
	cout << "how many cars do you wish to catalog? ";
	int number;
	cin >> number;
	cin.get();
	Car* collection = new Car[number];
	for (int i = 0; i < number; ++i) {
		cout << "Car #" << i + 1 << ":\n";
		cout << "Please enter the make: ";
		getline(cin, collection[i].make);
		cout << "Please enter the year made:\n";
		cin >> collection[i].year;
		cin.get();
	}
	cout << "Here is your collection:\n";
	for (int i = 0; i < number; i++) {
		cout << collection[i].year << " "
			<< collection[i].make << endl;
	}
	delete[] collection; // memory free, 字符串，必须用 delete[]
	return 0;
}