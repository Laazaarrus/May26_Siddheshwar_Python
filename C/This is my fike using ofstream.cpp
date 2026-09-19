#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int id;
	string name;
	ofstream file("new.txt");
	
	cout<<"Enter your ID:";
	cin>>id;
	cout<<"Enter your Name:";
	cin>>name;
	
	file<<"ID: "<<id;
	file<<"\nName: "<<name;
}
