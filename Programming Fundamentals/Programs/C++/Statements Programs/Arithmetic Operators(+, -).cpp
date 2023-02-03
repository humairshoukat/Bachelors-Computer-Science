#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i, n;
	char j;
	cout<<"Enter First Number";
	cin>>i;
	cout<<"Enter arithmetic operator";
	cin>>j;
	cout<<"Enter second number";
	cin>>n;
	switch(j)
	{
		case '+':
			cout<<i<<"+"<<n<<"="<<i+n;
			break;
		case '-':
			cout<<i<<"-"<<n<<"="<<i-n;
			break;
		case '*':
			cout<<i<<"*"<<n<<"="<<i*n;
			break;
		case '/':
			cout<<i<<"/"<<n<<"="<<i/n;
			break;
		default:
			cout<<"Error";
	}
	getch();
}
