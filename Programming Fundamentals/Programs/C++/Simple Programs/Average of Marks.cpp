#include<iostream>
using namespace std;
int main()
{
	int Eng, Math, Urdu, Phy, Che;
	float avg;
	cout<<"enter marks of english";
	cin>>Eng;
	cout<<"enter marks of urdu";
	cin>>Urdu;
	cout<<"enter marks of Math";
	cin>>Math;
	cout<<"enter marks of Physics";
	cin>>Phy;
	cout<<"enter marks of chemistry";
	cin>>Che;
	avg=(Eng+Math+Urdu+Phy+Che)/5;
	cout<<"Average is"<<avg;
}
