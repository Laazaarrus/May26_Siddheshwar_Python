#include<iostream>
using namespace std; 
class master //Polymorphism (Method Overriding)
{
	public:
	void header(string pname)
	{
		cout<<"\nH_Page:"<<pname;
	}
	void footer(string pname)
	{
		cout<<"\nF_Page:"<<pname;
	}
};
class home : public master
{
	
};
class about : public master
{
	
};
main()
{
	home h;
	about a;
	h.header("Home");
	h.footer("Home");
	a.header("About");
	a.footer("About");
}
