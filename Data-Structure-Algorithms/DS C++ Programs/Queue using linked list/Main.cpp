#include<iostream>
#include<conio.h>
using namespace std;
#include"Queue.h"
int main()
{
	Queue q;
	int n;
	do {
		cout << "Please choose an option" << endl;
		cout << "1. Enqueue\n";
		cout << "2. Dequeue\n";
		cout << "3. Front\n";
		cout << "4. Display\n";
		cout << "5. Exit\n";
		cin >> n;
		switch (n)
		{
		case 1:
		{
			int x;
			cout << "Enter new value: ";
			cin >> x;
			q.enqueue(x); 
			break;
		}
		case 2:
		{cout<<q.dequeue()<<endl;  break; }
		case 3:
		{cout<<q.Front()<<endl;  break; }
		case 4:
		{q.Display();  break; }
		case 5:
		{q.exit();  break; }
		default:
		{cout << "No option choosen\n"; }
		}
	} while (n != 5);
	_getch();
}