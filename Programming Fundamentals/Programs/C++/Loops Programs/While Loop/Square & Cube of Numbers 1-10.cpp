#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"Value\tSquare\tCube"<<"\n";
	while(a<=10)
	{
		cout<<a<<"\t"<<a*a<<"\t"<<a*a*a<<"\n";
		a++;
	}
	getch();
}
