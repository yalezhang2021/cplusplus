//6-9
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int SIZE = 60;

struct donors {
	string name;
	double money;
};

int main()
{
	char filename[SIZE];
	ifstream inFile;

	cout << "Enter filename: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);

	if (!inFile.is_open())
	{
		cout << "can not find the file with name " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

// just need to change cin to inFile
	int acount, cnt = 0;
	(inFile >> acount).get();
	donors* patron = new donors[acount];	//new and delete[] patron
	for (int i = 0; i < acount; i++)
	{
		getline(inFile, patron[i].name); // input string, get()会接收输入时的回车，
									     //所以上面的输入要带一个get()	
		(inFile >> patron[i].money).get();
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