#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number";
	cin>>n;
	int i=1;
	do
	{
		cout<<n<<"*"<<i<<"="<<n*i<<"\n";
		i++;
	}while(i<=10);
}

