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
		cout << "1. Create\n";
		cout << "2. Insert\n";
		cout << "3. Deletion\n";
		cout << "4. Update\n";
		cout << "5. Copy\n";
		cout << "6. Get\n";
		cout << "7. Length\n";
		cout << "8. Start\n";
		cout << "9. Next\n";
		cout << "10. Back\n";
		cout << "11. Tail\n";
		cout << "12. Display\n";
		cout << "13. Clear\n";
		cout << "14. Find\n";
		cout << "15. Deallocate\n";
		cout << "16. Exit\n";
		cout << "Please choose an option ";
		cin >> n;
		switch (n)
		{
		case 1:
		{a.create_list();  break; }
		case 2:
		{a.insert_list();  break; }
		case 3:
		{a.delete_list();  break; }
		case 4:
		{a.update_list();  break; }
		case 5:
		{a.copy_list();  break; }
		case 6:
		{a.get();  break; }
		case 7:
		{a.length();  break; }
		case 8:
		{a.start();  break; }
		case 9:
		{a.next();  break; }
		case 10:
		{a.back();  break; }
		case 11:
		{a.tail();  break; }
		case 12:
		{a.display_list(); break; }
		case 13:
		{a.clear_list();  break; }
		case 14:
		{a.Find();  break; }
		case 15:
		{a.deallocate();  break; }
		case 16:
		{a.exit(); break; }
		default:
		{cout << "No option choosen\n"; }
		}
	} while (n != 16);
	_getch();
}