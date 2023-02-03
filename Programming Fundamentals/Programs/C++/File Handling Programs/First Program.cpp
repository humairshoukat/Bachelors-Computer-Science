#include <iostream> 
#include <fstream> 
using namespace std; 
int main ()
{
   ofstream myfile;
   myfile.open("D:\\Computer Science\\1st Semester\\Programming Fundamentals\\Programs\\C++\\DevC++\\File Handling Programs\\First Program.txt", ios_base::out); 
   cout<<"Writing on console screen";
   myfile << "Welcome to File Handling\nthis is my first file handling program";
   myfile.close();
   return 0; 
} 

