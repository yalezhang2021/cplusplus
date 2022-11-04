// 5-4
#include <iostream>
using namespace std;
int main() {
	double daphne = 100.0, cleo = 100.0;
	for (int i = 1; daphne >= cleo; ++i)
	{
		daphne += 10;
		cleo += cleo * 0.05;
		cout << "year: " << i << "\t" << daphne << "\t" << cleo << endl;
	}
	return 0;
}