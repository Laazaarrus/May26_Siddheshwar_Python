#include<iostream>
using namespace std;
class account
{
	public:
	int acnum;
	string name;
	string type;

	void acc_getdata()
	{
		cout<<"Enter Your Account Number:";
		cin>>acnum;
		cout<<"Enter Account Holder Name:";
		cin>>name;
		cout<<"Enter Account Type (Savings/Current):";
		cin>>type;
}
};
class deposit : public account
{
	public:
	int depo;
	
	void d_getdata()
	{	
		cout<<"Enter amount of Money to be deposited (min. 2000/-):";
		cin>>depo;
		if (depo >= 2000)
		cout<<"Deposit Sucessful!";
		else
		cout<<"Sorry you can only deposit minimum amount above 2000/-";	
	}
};
class withdrawal : public deposit
{
    public:
	int with;
	
	void w_getdata()
	{
		cout<<"\nEnter amount of Money to be Withdrawn:";
		cin>>with;
		if (with > depo)
		cout<<"Sorry not enough Money in the account!";
		}	
};
class statement : public withdrawal
{
	public:
	
	void printdata()
	{
		cout<<"\n-----Account Statement-----";
		cout<<"\nA/c Number:"<<acnum;
		cout<<"\nA/c Holder Name:"<<name;
		cout<<"\nA/c Type:"<<type;
		cout<<"\nA/c Balance:"<<depo - with;
	}
};
main()
{
	statement st;
	st.acc_getdata();
	st.d_getdata();
	st.w_getdata();
	st.printdata();
}
