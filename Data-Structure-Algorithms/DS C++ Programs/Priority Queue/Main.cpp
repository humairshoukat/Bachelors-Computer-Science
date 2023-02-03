#include<iostream>
#include<conio.h>
#include<string>
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
		cout << "4. isEmpty\n";
		cout << "5. Display\n";
		cout << "6. Exit\n";
		cin >> n;
		switch (n)
		{
		case 1:
		{
			string name;
			string degree;
			float gpa;
			int p;
			cout << "Enter Name: ";
			cin.ignore();
			getline(cin,name);
			cout << "Enter Degree: ";
			cin >> degree;
			cout << "Enter CGPA: ";
			cin >> gpa;
			cout << "Enter Priority: ";
			cin >> p;
			if (p <= 10)
			{
				q.enqueue(name, degree, gpa, p);
			}
			else
			{
				cout << "You entered wrong priority, Please re-enter priority between 0-10" << endl;
			} 
			break;
		}
		case 2:
		{cout << q.dequeue() << "\n" <<endl;  break; }
		case 3:
		{q.Front();  break; }
		case 4:
		{
			if (q.isEmpty())
			{
				cout << "Queue is Empty" << endl;
			}
			else
			{
				cout << "Queue is not Empty" << endl;
			}
			break;
		}
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