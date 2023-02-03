#include<iostream>
#include<conio.h>
using namespace std;
#include"Stack.h"
int main()
{
	Stack a;
	int n;
	do {
		cout << "Please choose an option"<<endl;
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. TOS\n";
		cout << "4. IsEmpty\n";
		cout << "5. Display\n";
		cout << "6. Exit\n";
		cin >> n;
		switch (n)
		{
		case 1:
		{
			int x;
			cout << "Enter new value: ";
			cin >> x;
			a.push(x);
		    break;
		}
		case 2:
		{
			if (!a.isEmpty())
			{
				cout << a.pop() << endl;
			}
			else
			{
				cout << "Can't Pop" << endl;
			}
		    break;
		}
		case 3:
		{
			if (!a.isEmpty())
			{
				cout << a.TOS() << endl;
			}
			break; 
		}
		case 4:
		{
			if (a.isEmpty())
			{ }
			else
			{
				cout << "Stack is not empty" << endl;
			}
			break;
		}
		case 5:
		{a.display();  break; }
		case 6:
		{a.exit();  break; }
		default:
		{cout << "No option choosen\n"; }
		}
	} while (n != 6);
	_getch();
}