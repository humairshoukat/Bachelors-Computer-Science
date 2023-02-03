#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sum=0;
	for(int a=1;a<=10;a++)
	{
		cout<<a<<"\t"<<(11-a)<<endl;
		sum+=a;
	}
	cout<<"sum is:"<<sum;
	getch();
}
