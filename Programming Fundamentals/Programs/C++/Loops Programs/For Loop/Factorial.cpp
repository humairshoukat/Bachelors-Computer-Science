#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int num, fact=1;
cout<<"Enter a number ";
cin>>num;
for(int a=num;a>0;a--)
{
	fact *= a;
}
cout<<"Factorial of "<<num<<" is "<<fact;
getch();
}

