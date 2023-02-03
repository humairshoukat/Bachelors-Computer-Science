#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	float x1, x2, s;
	cout<<"Enter Value of A";
	cin>>a;
	cout<<"enter value of B";
	cin>>b;
	cout<<"enter value of C";
	cin>>c;
	s=sqrt(b*b)-(4*a*c);
	x1=(b+s)/2*a;
	cout<<"Value of X1 is:"<<x1<<"\n";
	x2=(-b-s)/2*a;
	cout<<"Value of X2 is: "<<x2;
}
