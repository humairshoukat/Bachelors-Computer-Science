#include<iostream>
#include<conio.h>
using namespace std;
void myFunction(int num1, int num2)
{
	if(num1<num2)
	{
		cout<<num1<<" is smaller";
	}
	else if(num2<num1)
	{
		cout<<num2<<" is smaller";
	}
	else
	{
		cout<<"Both numbers are equal";
	}
	cout<<endl;
}
int main()
{
	int a, b;
	cout<<"Enter First number";
	cin>>a;
	cout<<"Enter Second number";
	cin>>b;
	myFunction(a,b);
	getch();
}
