#include <iostream>
#include<conio.h>
using namespace std;
struct Pattern
{
	int space;
	int rows;
};
int myFunction(Pattern a, Pattern b)
{
	a.space=b.rows+4-1;
    for(int i=1;i<=b.rows;i++)
    {
        for(int k=a.space;k>=1;k--)
        {
            cout<<" ";
        }
	    for(int j=1;j<=i;j++)
	    cout<<i<<" ";
	    cout<<endl;
        a.space--;
    }
}
int main()
{
    Pattern a, b;
    int space=a.space;
    cout<<"Enter number of rows: ";
    cin>>b.rows;
    myFunction(a,b);
    getch();
}
