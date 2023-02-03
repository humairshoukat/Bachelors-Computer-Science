#include<iostream>
#include<conio.h>
using namespace std;
struct Fraction
{
    int num;
    int den;
};
Fraction sum(Fraction F1, Fraction F2)
{
    Fraction result={(F1.num*F2.den)+(F2.num*F1.den), F1.den*F2.den};
    return result;
}
int main()
{
    int num1,den1,num2,den2;
    cout<<"Enter Fraction 1(numerator denominator):";
    cin>>num1>>den1;
    cout<<"Enter Fraction 2(numerator denominator):";
    cin>>num2>>den2;
    Fraction F1={num1, den1};
    Fraction F2 ={num2, den2};
    Fraction result = sum(F1, F2);
    cout<<"Result: "<<result.num<<"/"<<result.den;  
    getch();
}
