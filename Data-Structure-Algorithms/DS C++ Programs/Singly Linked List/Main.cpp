#include<iostream>
#include<conio.h>
using namespace std;
#include"list.h"
int main()
{
	cout << "Hello BSCS 3 A\n";
	list a;
	int n;
	do {
		cout << "Please choose an option" << endl;
		cout << "1. Insert\n";
		cout << "2. Deletion\n";
		cout << "3. Update\n";
		cout << "4. Get\n";
		cout << "5. Length\n";
		cout << "6. Start\n";
		cout << "7. Next\n";
		cout << "8. Back\n";
		cout << "9. Tail\n";
		cout << "10. Display\n";
		cout << "11. Clear\n";
		cout << "12. Find\n";
		cout << "13. Exit\n";
		cin >> n;
		switch (n)
		{
		case 1:
		{a.insert_list();  break; }
		case 2:
		{a.delete_list();  break; }
		case 3:
		{a.update_list();  break; }
		case 4:
		{a.get();  break; }
		case 5:
		{a.length();  break; }
		case 6:
		{a.start();  break; }
		case 7:
		{a.next();  break; }
		case 8:
		{a.back();  break; }
		case 9:
		{a.tail();  break; }
		case 10:
		{a.display_list(); break; }
		case 11:
		{a.clear(); break; }
		case 12:
		{a.Find();  break; }
		case 13:
		{a.exit(); break; }
		default:
		{cout << "No option choosen\n"; }
		}
	} while (n != 13);
	_getch();
}