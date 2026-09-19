#include <iostream>
using namespace std;
struct student
{
	int id;
	string name;
}st[5];//array of structure
{
	int n,i;
	cout<<"Enter number of students:";
	cin>>n;
}
{
	cout<<"Enter your ID:";
	cin>>st[i].id;
	cout<<"Enter your name";
	cin>>st[i].name;
}
for(i=0;i<n;i++)
{
	cout<<"\nID:"<<st[i].id;
	cout<<"\nName:"<<st[i].name;
}
