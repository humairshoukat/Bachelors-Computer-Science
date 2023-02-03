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
		cout << "1. Create Queue\n";
		cout << "2. Enqueue\n";
		cout << "3. Dequeue\n";
		cout << "4. Front\n";
		cout << "5. Display\n";
		cout << "6. Exit\n";
		cin >> n;
		switch (n)
		{
		case 1:
		{q.create_queue();  break; }
		case 2:
		{
			int x;
			cout << "Enter new value: ";
			cin >> x;
			q.enqueue(x);
			break;
		}
		case 3:
		{cout << q.dequeue() << endl;  break; }
		case 4:
		{cout << q.Front() << endl;  break; }
		case 5:
		{q.Display();  break; }
		case 6:
		{q.exit();  break; }
		default:
		{cout << "No option choosen\n"; }
		}
	} while (n != 6);
	_getch();
}