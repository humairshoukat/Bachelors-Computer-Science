#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"Value\tSquare\tCube"<<"\n";
	for(int a=1; a<=10; a++)
	{
		cout<<a<<"\t"<<a*a<<"\t"<<a*a*a<<"\n";
	}
	getch();
}
