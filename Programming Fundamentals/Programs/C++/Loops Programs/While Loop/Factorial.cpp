#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int num, fact=1;
cout<<"Enter a number ";
cin>>num;
int a=num;
while(a>0)
{
	fact *= a;
	a--;
}
cout<<"Factorial of "<<num<<" is "<<fact;
getch();
}
