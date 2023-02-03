#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int r, c;
	cout << "Enter number of rows of your array: ";
	cin >> r;
	cout << "Enter number of columns of your array: ";
	cin >> c;
	cout << endl;
	int** arr = new int*[r];
	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
		for (int j = 0; j < c; j++)
		{
			cout << "Enter value at position row" << i + 1 << " and column" << j + 1 << ": ";
			cin >> arr[i][j];
		}
		cout << endl;
	}
	cout << "Your entered array is: " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	_getch();
}