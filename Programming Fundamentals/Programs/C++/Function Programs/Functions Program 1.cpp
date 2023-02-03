#include<iostream>
#include<conio.h>
using namespace std;
int sum()
{
	int a=10;
	int b=5;
	int c;
	c=a+b;
	cout<<c;
}
int divide()
{
	int a=10;
	int b=5;
	int c;
	c=a/b;
	cout<<c;
}
int multiply()
{
	int a=10;
	int b=5;
	int c;
	c=a*b;
	cout<<c;
}
int subtract()
{
	int a=10;
	int b=5;
	int c;
	c=a-b;
	cout<<c;
}
int main()
{
	int n;
	cout<<"Press 1 for Sum, 2 for subtraction, 3 for multiplication, 4 for division";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Sum is:";
			sum();
			break;
		case 2:
			cout<<"Subtraction is:";
			subtract();
			break;
		case 3:
			cout<<"Multiplication is:";
			multiply();
			break;
		case 4:
			cout<<"Division is:";
			divide();
			break;
		default:
			cout<<"Error";
	}
	getch();
}
