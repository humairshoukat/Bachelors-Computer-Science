#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char x;
	cout<<"enter a character";
	cin>>x;
	switch(x)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"it is a vowel";
			break;
		default:
			cout<<"it is a consonant";
	}
	getch();
}
