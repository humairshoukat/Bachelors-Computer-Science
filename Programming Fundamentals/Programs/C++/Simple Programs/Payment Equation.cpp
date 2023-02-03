#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float P, R, E, payment;
	cout<<"Enter value of P";
	cin>>P;
	cout<<"Enter value of R";
	cin>>R;
	E=pow(1+R,-4);
	payment=(P*R)/1-E;
	cout<<"Payment is"<<payment;
}
