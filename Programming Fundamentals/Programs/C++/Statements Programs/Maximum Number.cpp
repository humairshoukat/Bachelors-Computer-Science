#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a, b, c, max;
	cout<<"Enter first number";
	cin>>a;
	cout<<"Enter second number";
	cin>>b;
	cout<<"Enter third number";
	cin>>c;
	max=a;
	if(max<b)
	max=b;
	if(max<c)
	max=c;
	cout<<"Maximun number is: "<<max;
	getch();
}
