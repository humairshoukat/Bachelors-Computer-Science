#include <iostream>
#include<conio.h>
using namespace std;
struct Structure
{
	int rows;
};
int myFunction(Structure s)
{
	int count=0, count1=0, k=0;
	for(int i=1; i<=s.rows; ++i)
    {
        for(int space=1; space<=s.rows-i; ++space)
        {
            cout<<"  ";
            ++count;
        }
        while(k!=2*i-1)
        {
            if (count<=s.rows-1)
            {
                cout<<i+k<<" ";
                ++count;
            }
            else
            {
                ++count1;
                cout<<i+k-2*count1<<" ";
            }
            ++k;
        }
        count1=count=k=0;
        cout<<endl;
    }
}
int main()
{
    Structure s;
    cout<<"Enter number of rows: ";
    cin>>s.rows;
    myFunction(s);
    getch();
}
