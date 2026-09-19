#include<iostream>
using namespace std;
class studinfo
{
    int id=88;
	string name="Suraj";
	public:
	void printdata()
	{
		cout<<"ID:"<<id;
		cout<<"\nName:"<<name;
		}	
};
main()
{
	studinfo st;//object of class
	st.printdata();
}
