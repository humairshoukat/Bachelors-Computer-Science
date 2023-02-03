#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int numbers[5];
	cout<<"Enter 5 numbers: ";
	for(int i=0; i<5; i++)
	{
		cin>>numbers[i];
	}
	cout<<"Entered numbers are"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<numbers[i]<<"\n";
	}
	getch();
}
