#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int numbers[5];
	int sum=0;
	cout<<"Enter 5 numbers: ";
	for(int i=0; i<5; i++)
	{
		cin>>numbers[i];
		sum=sum+numbers[i];
	}
	cout<<"Sum="<<sum<<endl;
	getch();
}
