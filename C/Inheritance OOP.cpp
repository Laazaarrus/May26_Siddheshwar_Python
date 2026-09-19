#include<iostream>
using namespace std;
class father
{
	public:
	int car, bal;
	
	void getdata()
	{
		cout<<"Enter no. of car:";
		cin>>car;
		cout<<"Enter bank balance:";
		cin>>bal;
	}
};
class son : public father
{
	public:
	void printdata()
	{
		cout<<"\ncar:"<<car;
		cout<<"\nbal:"<<bal;
	}
};
main()
{
	son sn;
	sn.getdata();
	sn.printdata();
}
