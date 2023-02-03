#include<iostream>
#include<conio.h>
using namespace std;
void grade(int n)
{
	if(n>=80)
	{
		cout<<"A+ Grade";
	}
	else if(n>=70 && n<80)
	{
		cout<<"A Grade";
	}
	else if(n>=60 && n<70)
	{
		cout<<"B Grade";
	}
	else if(n>=50 && n<60)
	{
		cout<<"C Grade";
	}
	else if(n>=40 && n<50)
	{
		cout<<"D Grade";
	}
	else if(n>=33 && n<40)
	{
		cout<<"E Grade";
	}
	else
	{
		cout<<"F Grade (Fail)";
	}
}
int main()
{
	int marks;
	cout<<"Enter your marks";
	cin>>marks;
	grade(marks);
	getch();
}
