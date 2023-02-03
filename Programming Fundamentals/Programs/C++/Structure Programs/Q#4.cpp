#include <iostream>
#include<conio.h>
using namespace std;
struct Structure
{
	int value=0;
};
int main()
{
	cout<<"The Unique Three-Digit Numbers are: "<<endl<<"\n";
	Structure s;
	for(int i = 1; i <= 4; i++)
	{
		for(int j = 1; j <= 4; j++)
		{
			for(int k = 1; k <= 4; k++)
			{
				if(k != i && k != j && i != j)
				{
					s.value++;
					cout<<i<<j<<k<<" ";
				}
			}
		}
	}
	cout<<"\n\n"<<"Total Three-Digit numbers are: "<<s.value<<endl<<endl;
	getch();
}
