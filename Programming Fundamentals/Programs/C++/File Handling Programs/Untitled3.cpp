#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[50];
	ofstream ofile;
	ofile.open("C:\\Users\\HP\\Desktop\\hg.txt");
	cout<<"Writing to the file"<<endl;
	cout<<"Enter your name: "<<endl;
	cin.getline(name,50);
	cout<<endl;
	ofile<<name<<endl;
	ofile.close();
	ifstream ifile;
	ifile.open("C:\\Users\\HP\\Desktop\\hg.txt");
	cout<<"Readfing from the file"<<endl;
	ifile>>name;
	cout<<name<<endl;
	ifile.close();
	return 0;
}
