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
		cout << "1. Create\n";
		cout << "2. Push\n";
		cout << "3. Pop\n";
		cout << "4. TOS\n";
		cout << "5. IsEmpty\n";
		cout << "6. IsFull\n";
		cout << "7. Display\n";
		cout << "8. Exit\n";
		cin >> n;
		switch (n)
		{
		case 1:
		{a.create_stack();  break; }
		case 2:
		{
			if (a.isFull())
			{
				cout << "Can't Push"<<endl;
			}
			else
			{
				int x;
				cout << "Enter new value: ";
				cin >> x;
				a.push(x);
			}
		    break;
		}
		case 3:
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
		case 4:
		{
			if (!a.isEmpty())
			{
				cout << a.TOS() << endl;
			}
			break; 
		}
		case 5:
		{cout << a.isEmpty() << endl;  break; }
		case 6:
		{cout << a.isFull() << endl;  break; }
		case 7:
		{a.display();  break; }
		case 8:
		{a.exit();  break; }
		default:
		{cout << "No option choosen\n"; }
		}
	} while (n != 8);
	_getch();
}