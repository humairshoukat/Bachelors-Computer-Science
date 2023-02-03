#include<iostream>
#include<conio.h>
using namespace std;
#include"Tree.h"
int main()
{
	Tree t;
	int menu;
	do {
		cout << "Please choose an option" << endl;
		cout << "1. Insert\n";
		cout << "2. Display all Duplicate Values\n";
		cout << "3. Search\n";
		cout << "4. Display\n";
		cout << "5. Delete\n";
		cout << "6. Total No. of Nodes\n";
		cout << "7. Exit\n";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			int n;
			cout << "Enter new value: ";
			cin >> n;
			t.insert(n);
			/*int x[] = {14,15,4,9,7,18,3,5,16,4,20,17,9,14,5,-1};
			for (int i = 0; x[i] > 0; i++)
			{
				t.insert(x[i]);
			}*/
			cout << endl;
            break;
		}
		case 2:
		{t.DD(); cout << endl; break; }
		case 3:
		{
			int info;
			cout << "Enter Value you want to search: ";
			cin >> info;
			t.Search(info);
			cout << endl;
			break;
		}
		case 4:
		{t.Display(); cout << endl;  break; }
		case 5:
		{
			int info;
			cout << "Enter value you want to delete: ";
			cin >> info;
			t.remove(t.rootnode, info);
			cout << endl;
			break;
		}
		case 6:
		{t.TN(); cout << endl; break; }
		case 7:
		{t.Exit();  break; }
		default:
		{cout << "No option choosen\n"; }
		}
	} while (menu != 7);
	_getch();
}