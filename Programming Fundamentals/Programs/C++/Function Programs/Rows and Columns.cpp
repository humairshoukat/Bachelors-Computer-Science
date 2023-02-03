#include<iostream>
#include<conio.h>
using namespace std;
void myFunction(int rows, int columns)
{
	for(int i=1; i<=rows; i++)
	{
		if(i<=columns)
		{
			for(int j=1; j<=i; j++)
			{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
}
int main()
{
	int r, c;
	cout<<"Enter rows";
	cin>>r;
	cout<<"Enter columns";
	cin>>c;
	myFunction(r, c);
	getch();
}
