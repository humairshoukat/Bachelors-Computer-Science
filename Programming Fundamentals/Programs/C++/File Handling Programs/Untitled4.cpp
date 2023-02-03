#include<iostream>
#include <fstream>
 using namespace std;
int main()
{    int empno;
    char name[10];
    char dept[5];
    char desig[5];
    double basic;
    ofstream ofile;
ofile.open("C:\\Users\\HP\\Desktop\\New.txt",ios_base::out);
        cout << endl<< "Enter empno";
        cin >> empno;
         cout << endl<< "Enter empname";
        cin >>name;
        cout << endl<< "Enter department";
        cin >> dept;
        cout << endl<< "Enter designation";
        cin >> desig;
         cout << endl<< "Enter basic pay";
        cin >>  basic;
        ofile  << endl<< "Employee no";
        ofile << empno;
       ofile  << endl<< "Employee Name";
        ofile << name;
        ofile  << endl<< "Employee Department";
        ofile << dept;
        ofile  << endl<< "Employee Designation";
        ofile << desig;
       ofile  << endl<< "Employee Salary";
        ofile << basic;           
        ofile.close();  
        }

