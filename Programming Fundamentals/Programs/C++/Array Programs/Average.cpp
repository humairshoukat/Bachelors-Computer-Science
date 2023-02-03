#include<iostream>
#include<conio.h>
using namespace std;
float average(float a[])
{
	float avg, sum=0;
	for(int i=0; i<8; i++)
	{
		sum+=a[i];
	}
	avg=sum/8;
}
int main()
{
	float n[]={20.6, 30.8, 5.1, 67.2, 23, 2.9, 4, 8};
	float b=average(n);
	cout<<"Average of numbers= "<<b<<endl;
	getch();
}
