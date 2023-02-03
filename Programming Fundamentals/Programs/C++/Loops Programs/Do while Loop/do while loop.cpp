#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sum=0;
	int a=1;
	do
	{
		cout<<a<<"\t"<<(11-a)<<"\n";
		sum+=a;
		a++;
	}while(a<=10);
	cout<<"sum is:"<<sum;
	getch();
}
