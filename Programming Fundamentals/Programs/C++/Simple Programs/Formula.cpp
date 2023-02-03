#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float r, F, P, S, D, E;
	cout<<"Enter value of r";
	cin>>r;
	cout<<"Enter value of F";
	cin>>F;
	E=pow(1+r,5);
	S=r/E-1;
	D=1/1+r;
	P=F*S*D;
	cout<<"Value of P is:"<<P;
}
