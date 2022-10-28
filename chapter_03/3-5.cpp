// chapter_03 solutions of the exercises
//5.
#include <iostream>
using namespace std;

int main() {
	long long p_world, p_us;
	cout << "Enter the world's population: ";
	cin >> p_world;
	cout << "Enter the population of the US: ";
	cin >> p_us;
	// percent calculation
	// ????????????int
	cout << "The population of the US is " \
		<< p_us * 100.0 / p_world  << "\% of the world population.";
	return 0;
}