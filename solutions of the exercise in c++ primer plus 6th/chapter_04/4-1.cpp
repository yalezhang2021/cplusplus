////4-1
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	char f_name[20], l_name[20], letter;
//	int age;
//
//	cout << "What is your first name? ";
//	cin.getline(f_name, 20);	// indicate maximum length
//	cout << "What is your last name? ";
//	cin.getline(l_name, 20);
//	cout << "What letter grade do you deserve? ";
//	cin >> letter;
//	char* pt;
//	pt = &letter;
//	cout << "What is your age? ";
//	cin >> age;
//
//	cout << "Name: " << l_name << ", " << f_name << endl;
//	cout << "Grade: " << char( * pt + 1) << endl;
//	cout << "Age: " << age << endl;
//	return 0;
//}

//4-1
#include <iostream>
#include <string>
using namespace std;
int main() {
	string f_name, l_name;
	char letter;
	int age;

	cout << "What is your first name? ";
	getline(cin, f_name); // differ cin.getline(charr, strlen(charr))
	cout << "What is your last name? ";
	getline(cin, l_name);
	cout << "What letter grade do you deserve? ";
	cin >> letter;
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << l_name << ", " << f_name << endl;
	cout << "Grade: " << ++letter << endl;	// 直接用了++特性
	cout << "Age: " << age << endl;
	return 0;
}