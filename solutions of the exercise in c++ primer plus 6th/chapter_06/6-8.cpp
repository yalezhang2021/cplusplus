//6-8
#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 60;
int main()
{
	char filename[SIZE];
	ifstream inFile;	// object for handling file input

	cout << "Enter name of data file:\n";
	cin.getline(filename, SIZE);
	inFile.open(filename);

	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	int cnt = 0;
	char ch;
	while (inFile >> ch)
	{
		++cnt;
		//inFile >> ch; //数字，字母,标点，除了空格
	}

	cout << "This file includes " << cnt << " characters." << endl;
	inFile.close();
	return 0;
}