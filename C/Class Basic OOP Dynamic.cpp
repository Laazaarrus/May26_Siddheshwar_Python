#include<iostream>
using namespace std;
class studinfo
{
	//public can also go here.
    int id;
	string name;
	
	public: //by default private.
	void getdata()
	{
	cout<<"Enter your ID:";
	cin>>id;
	cout<<"Enter your Name:";
	cin>>name;
        }
	void printdata()
	{
		cout<<"ID:"<<id;
		cout<<"\nName:"<<name;
		}	
}; //object can also be declared here.
main()
{
	studinfo st;//object of class.
	st.getdata();
	st.printdata();
}
