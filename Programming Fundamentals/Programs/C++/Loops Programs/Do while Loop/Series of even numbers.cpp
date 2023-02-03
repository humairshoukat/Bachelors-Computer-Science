#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number";
	cin>>n;
	int i=0;
	do
	{
		cout<<i<<"\n";
		i=i+2;
	}while(i<=n);
	getch();
}
