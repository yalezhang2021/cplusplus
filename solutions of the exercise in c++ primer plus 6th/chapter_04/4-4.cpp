// 4-4
#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "Enter your first name: ";
	string f_name;
	getline(cin, f_name);
	cout << "Enter your last name: ";
	string l_name;
	getline(cin, l_name);
	cout << "Here's the information in a single string: "
		<< l_name << ", " << f_name << endl;
	return 0;
}