//6-1
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	cout << "Enter characters, type @ to terminate.\n";
	char ch;
	
	while (cin >> ch && ch != '@')
	{
		if (isdigit(ch))
			continue;
		ch = islower(ch) ? toupper(ch) : tolower(ch);
		cout << ch;
	}
	return 0;
}