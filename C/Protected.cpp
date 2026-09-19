#include<iostream>
using namespace std;
class userinfo
{
	protected:
	int id;
	string name;
	
	public:
	void getdata()
	{
	    id=77;
	    name="Suraj";
	}
};
class result : public userinfo
{
	public:
	void printdata()
	{
	cout<<"\nID:"<<id;
	cout<<"\nName:"<<name;
	}
};
main()
{
	userinfo ur;
	result rs;
	ur.getdata();
	rs.printdata();
}
