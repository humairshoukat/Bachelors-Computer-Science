#include<iostream>
#include<conio.h>
using namespace std;
void myFunction(int n)
{
	if(n%2==0)
	{
		cout<<"Number is Even";
	}
	else
	{
		cout<<"Number is odd";
	}
	cout<<endl;
}
int main()
{
	int a;
	cout<<"Enter any number";
	cin>>a;
	myFunction(a);
	getch();
}
