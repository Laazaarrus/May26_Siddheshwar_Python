#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int id,n,i;
	string name;
	ofstream file("new.txt",ios::app);
	
	cout<<"Enter number of students;";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"Enter your ID:";
	cin>>id;
	cout<<"Enter your Name:";
	cin>>name;
	file<<"ID: "<<id;
	file<<"\nName: "<<name<<"\n";
	}
}
