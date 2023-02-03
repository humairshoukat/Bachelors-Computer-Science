#include<iostream>
#include<conio.h>
using namespace std;
void sum(int arr1[], int arr2[])
{
	int temp[5];
	for(int i=0; i<5; i++)
	{
		temp[i]=arr1[i]+arr2[i];
		cout<<temp[i]<<endl;
	}
}
int main()
{
	int a[5]={10,20,30,40,50};
	int b[5]={1,2,3,4,5};
	sum(a,b);
	getch();
}
