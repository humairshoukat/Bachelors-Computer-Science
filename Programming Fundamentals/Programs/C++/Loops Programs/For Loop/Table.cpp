#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a Number";
	cin>>a;
	for(int b=1;b<=10;b++)
	{
		cout<<a<<"*"<<b<<"="<<a*b<<"\n";
	}
	getch();
}
