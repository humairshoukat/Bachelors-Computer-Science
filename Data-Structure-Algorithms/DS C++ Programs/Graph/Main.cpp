#include<iostream>
#include<conio.h>
using namespace std;
#include"Graph.h"
int main()
{
	Graph g(4);
	int menu;
	do {
		cout << "Please choose an option" << endl;
		cout << "1. Construct Graph\n";
		cout << "2. Display Graph\n";
		cout << "3. Exit\n";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			g.addEdge(0, 1);
			g.addEdge(0, 2);
			g.addEdge(1, 2);
			g.addEdge(2, 0);
			g.addEdge(2, 3);
			cout <<"Graph is successfully constructed"<< endl;
			break;
		}
		case 2:
		{g.PrintGraph(); cout << endl; break; }
		case 3:
		{cout << "Thank You";  break; }
		default:
		{cout << "No option choosen\n"; }
		}
	} while (menu != 3);
	_getch();
}