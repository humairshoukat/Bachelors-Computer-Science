#include<iostream>
using namespace std;
int main()
{
	float fah, cel;
	cout<<"Enter temperature in Fahrenhiet";
	cin>>fah;
	cel=(fah-32)*5/9;
	cout<<"Temperatre in celsius is:"<<cel;
}
