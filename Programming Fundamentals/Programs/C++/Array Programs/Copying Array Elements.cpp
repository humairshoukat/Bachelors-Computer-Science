#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr1[10]={10,20,30,40,50,60,70,80,90,100};
	int arr2[10];
	for(int i=0; i<10; i++)
	{
		arr2[i]=arr1[i];
	}
	cout<<"\nCopy Array elements are: ";
	for(int i=0; i<10; i++)
	{
		cout<<arr2[i]<<" ";
	}
	getch();
}
