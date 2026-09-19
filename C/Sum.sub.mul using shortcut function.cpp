#include <iostream>
using namespace std;
void getsum(int a,int b)
{
	cout<<"\nSum:"<<a+b;
}
void getsub(int a,int b)
{
	cout<<"\nSub:"<<a-b;
}
void getmul(int a,int b)
{
    cout<<"\nMul:"<<a*b;	
}
main()
{
	int n1,n2;
	cout<<"Enter Number 1 and Number 2:";
	cin>>n1>>n2;
	getsum(n1,n2);
	getsub(n1,n2);
	getmul(n1,n2);
}
