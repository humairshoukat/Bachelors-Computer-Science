#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std; 
int main () 
{ string line; //string variable for storing text
ifstream myfile; //ifstream object
myfile.open("D:\\Computer Science\\1st Semester\\Programming Fundamentals\\Programs\\C++\\DevC++\\File Handling Programs\\First Program.txt",ios_base::in);
while(getline(myfile,line)) //read input
{   
    cout <<line<<'\n';
} //display the text
myfile.close(); // close the file 
}


