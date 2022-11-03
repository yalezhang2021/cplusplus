//4-6
#include <iostream>
using namespace std;

struct CandyBar{
	char brand[20];	//when define char, must with max length
	double weight;
	int kal;
};

int main() {
	CandyBar snack[2] = { {"yoyo lu", 2.456, 500}, {"Mocha Munch", 2.3, 350} };
	cout << snack[0].brand << " " << snack[0].weight << " " << snack[0].kal << endl;
	cout << snack[1].brand << " " << snack[1].weight << " " << snack[1].kal << endl;
	return 0;
}