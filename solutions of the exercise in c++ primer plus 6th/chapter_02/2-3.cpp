//2-3
#include <iostream>
#include <string>
using namespace std;
void func1(){ cout << "Three blind mice" << endl; };
void func2(){ cout << "See how they run" << endl; };

int main()
{
	func1();
	func1();
	func2();
	func2();
	return 0;
}