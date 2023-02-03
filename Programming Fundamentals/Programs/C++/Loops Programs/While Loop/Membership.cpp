#include<iostream>
using namespace std;
int main()
{
	int membership=2500, s;
	int incr=4/100*2500;
	while(incr<700)
	{
		s=membership+incr;
		cout<<"Membership is:"<<s<<"\n";
		incr=incr+100;
	}
}
