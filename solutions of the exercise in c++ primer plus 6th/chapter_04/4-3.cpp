// 4-3
#include <iostream>
using namespace std;
int main() {
	cout << "Enter your first name: ";
	char f_name[20];
	cin.getline(f_name, 20);	//getline 不读取换行符并丢弃， get则将换行符保留在输入队列中
	cout << "Enter your last name: ";
	char l_name[20];
	cin.getline(l_name, 20);
	cout << "Here's the information in a single string: "
		<< l_name << ", " << f_name << endl;
	return 0;
}