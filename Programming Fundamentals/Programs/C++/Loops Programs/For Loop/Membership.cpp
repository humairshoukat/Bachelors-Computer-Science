#include<iostream>
using namespace std;
int main()
{
    int membership=2500, s;
	int incr=4/100*2500;
	for(incr; incr<700; incr=incr+100)
	{
		s=membership+incr;
		cout<<"Membership is:"<<s<<"\n";
    }
}
