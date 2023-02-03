#include<iostream>
using namespace std;
int main()
{
	float w, h, bmi;
	cout<<"Enter weight";
	cin>>w;
	cout<<"Enter height";
	cin>>h;
	bmi=(w*703)/(h*h);
	cout<<"BMI is:"<<bmi;
}
