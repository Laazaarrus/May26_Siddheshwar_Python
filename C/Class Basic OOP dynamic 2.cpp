#include<iostream>
using namespace std;
class studinfo
{
	public:
	int id;
	string name;
	void getdata()
	{
		cout<<"Enter your ID:";
		cin>>id;
		cout<<"Enter your name:";
		cin>>name;
	}
};
class results : public studinfo
 {
	  
	public:
	void printdata()
    {
	cout<<"\nID:"<<id;
	cout<<"\Name:"<<name;
}
};
main()
{
	studinfo rs; //objects of class
	rs.getdata();
	rs.printdata();
}
