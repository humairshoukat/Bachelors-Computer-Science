#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int num, fact=1;
cout<<"Enter a number ";
cin>>num;
int a=num;
do
{
	fact *= a;
	a--;
}while(a>0);
cout<<"Factorial of "<<num<<" is "<<fact;
getch();
}
