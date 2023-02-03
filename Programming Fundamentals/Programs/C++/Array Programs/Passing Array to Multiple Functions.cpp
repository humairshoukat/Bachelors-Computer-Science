#include<iostream>
#include<conio.h>
using namespace std;
void display1(int m[5])
{
	cout<<"Function1"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Student"<<i+1<<": "<<m[i]<<endl;
	}
}
void display2(int n[5])
{
	cout<<"Function2"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Student"<<i+1<<": "<<n[i]<<endl;
	}
}
int main()
{
	int marks1[5]={88,76,90,61,59};
	display1(marks1);
	display2(marks1);
	getch();
}
