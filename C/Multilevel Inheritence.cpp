#include<iostream>
using namespace std;
class Suraj
{
	public:
	int sid;
	string stech;
	
	void s_getdata()
	{
		cout<<"Enter Suraj's ID:";
	    cin>>sid;
		cout<<"Enter Suraj's Tech:";
		cin>>stech;
	}
};
class Yash : public Suraj //multilevel
{
	public:
	int yid;
	string ytech;
	
	void y_getdata()
	{
		cout<<"Enter Yash's ID:";
		cin>>yid;
		cout<<"Enter Yash's Tech:";
		cin>>ytech;
	}
};
class Ashok : public Yash //multilevel
{
	public:
	int aid;
	string atech;
	
	void a_getdata()
	{
		cout<<"Enter Ashok's ID:";
		cin>>aid;
		cout<<"Enter Ashok's Tech:";
		cin>>atech;
	}
};
class tops : public Ashok
{
	public:
	void printdata()
	{
		cout<<"\n------Suraj's Info-------";
		cout<<"\nSuraj's ID:"<<sid;
		cout<<"\nSuraj's Tech:"<<stech;
		cout<<"\n------Yash's Info-------";
		cout<<"\nYash's ID:"<<yid;
		cout<<"\nYash's Tech:"<<ytech;
		cout<<"\n------Ashok's Info-------";
		cout<<"\nAshok's ID:"<<aid;
		cout<<"\nAshok's Tech:"<<atech;
	}
};
main()
{
	tops tp;
	tp.s_getdata();
	tp.y_getdata();
	tp.a_getdata();
	tp.printdata();
}
