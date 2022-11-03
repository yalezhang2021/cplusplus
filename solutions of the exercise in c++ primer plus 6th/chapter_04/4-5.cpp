//4-5
#include <iostream>
using namespace std;

struct CandyBar {
	char brand[20];	//when define char, must with max length
	double weight;
	int kal;
};

int main() {
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << snack.brand << " " << snack.weight << " " << snack.kal << endl;
	return 0;
}