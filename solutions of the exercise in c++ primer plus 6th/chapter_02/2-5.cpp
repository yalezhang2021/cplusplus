//2-5
#include <iostream>
using namespace std;
double convert(int n) { return n * 1.8 + 32; }; //有return的话肯定不能用void了
int main()
{
	cout << "Enter a Celsius temperature: ";
	int temp;
	cin >> temp;

	cout << temp << " degrees Celsius is " << convert(temp) << " degrees Fahrenheit.\n";
	return 0;
}