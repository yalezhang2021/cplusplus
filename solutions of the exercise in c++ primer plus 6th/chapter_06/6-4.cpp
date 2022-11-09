//6-4
#include <iostream>
const int  StrSize = 50;

struct bop {
	char fullname[StrSize]; // real name
	char title[StrSize];	// job title
	char bopname[StrSize];	// secret BOP name
	int preference;			// 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
	using namespace std;
	bop user[3] =
	{
		{"yao zhang",
		"master",
		"yale",
		0},
		{"lan zhang",
		"dr.",
		"LL.l",
		1},
		{"zuyi cao",
		"Prof.",
		"meizizi",
		2}

	};

	cout << "choose how to display:\n"
		<< "a. display by name\tb. display by title\n"
		<< "c. display by bopname\td. display by preferencec\n"
		<< "q. quit\n";

	char ch;
	cin >> ch;


	while (ch != 'q')
	{
		//while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd')
		//{
		//	cout << "Please choose from a, b, c, d; type q to quit: ";
		//	break;
		//}

		switch (ch)
		{
		case 'a':
			for (int i = 0; i < 3; i++)
				cout << user[i].fullname << endl;
			break;
		case 'b':
			for (int i = 0; i < 3; i++)
				cout << user[i].title << endl;
			break;
		case 'c':
			for (int i = 0; i < 3; i++)
				cout << user[i].bopname << endl;
			break;
		case 'd':
			for (int i = 0; i < 3; i++)
				switch (user[i].preference)
				{
				case 0:
					cout << user[i].fullname << endl;
					break;
				case 1:
					cout << user[i].title << endl;
					break;
				case 2:
					cout << user[i].bopname << endl;
					break;
				}
			break;
		}
		cout << "Next choice: " ;
		cin >> ch;
	}
	return 0;
}