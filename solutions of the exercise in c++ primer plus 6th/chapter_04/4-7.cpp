//4-7
#include <iostream>
#include <string>
using namespace std;

struct Pizza {
	string c_name;
	double diameter;	//直径
	double weight;
};

int main() {
	Pizza pizza0;
	cout << "company name: ";
	getline(cin, pizza0.c_name);
	cout << "weight: ";
	cin >> pizza0.weight;
	cout << "diameter: ";
	cin >> pizza0.diameter;

	cout << pizza0.c_name << " " << pizza0.weight << " " << pizza0.diameter << endl;
	return 0;
}