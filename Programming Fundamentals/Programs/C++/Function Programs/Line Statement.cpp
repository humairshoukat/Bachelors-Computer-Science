#include<iostream>
#include<conio.h>
using namespace std;
int line(char ch)
{
	for(int n=1; n<=20; n++)
	{
		cout<<ch;
	}
	cout<<endl;
}
int main()
{
	line('*');
	cout<<"Hello"<<endl;
	line('*');
	cout<<"We are studing functions"<<endl;
	line('*');
	getch();
}
