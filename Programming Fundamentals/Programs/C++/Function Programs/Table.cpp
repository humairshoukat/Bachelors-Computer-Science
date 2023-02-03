#include<iostream>
#include<conio.h>
using namespace std;
int myFunction()
{
	for(int n=1; n<=9; n++)
	{
		for(int i=1; i<=9; i++)
		{
			cout<<i<<"*"<<n<<"="<<i*n<<"\t";
		}
		cout<<endl;
	}
}
int main()
{
	myFunction();
	getch();
}
