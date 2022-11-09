//6-6
#include <iostream>
#include <string>
using namespace std;

struct donors {
	string name;
	double money;
};

int main()
{
	int acount, cnt = 0;
	cout << "Enter the donors number: ";
	(cin >> acount).get();
	donors* patron = new donors[acount];
	for (int i = 0; i < acount; i++)
	{
		cout << "donator #" << i+1 << ":\n";
		cout << "name: ";
		getline(cin, patron[i].name); // input string, get()会接收输入时的回车，
									//所以上面的输入要带一个get()
	
		cout << "money: ";
		(cin >> patron[i].money).get();
	}
	cout << "\nGrand Patron:\n";
	for (int j = 0; j < acount; j++)
	{
		if (patron[j].money >= 10000)
		{
			cout << "Patron: " << patron[j].name << "\t" << patron[j].money << endl;
			cnt++;
		}	
	}
	if (cnt == 0)
		cout << " none\n";
	
	cout << "\n\nPatron:\n";
	if (cnt == acount)
		cout << " none\n";
	else {
		for (int i = 0; i < acount; i++)
		{
			if (patron[i].money < 10000)
				cout << patron[i].name << "\t" << patron[i].money << endl;
		}
	}
	delete[] patron;
	return 0;
}