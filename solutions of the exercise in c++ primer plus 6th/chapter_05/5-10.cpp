//5-10
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter number of rows: ";
	int rows;
	cin >> rows;

	for (int i = 0; i < rows; ++i)//行
	{
		for (int j = 0; j < rows - i -1; ++j)//列
			cout << ".";
		for (int k = 0; k < i + 1; ++k)
			cout << "*";
		cout << endl;
	}
	return 0;
}