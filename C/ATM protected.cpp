#include<iostream>
using namespace std;
class ATM
{
	void checkbalance()
	{
		cout<<"\nBalance Checked!";
	}
	void dispatchcash()
	{
		cout<<"\nCash dispatched";
	}
	
	public:
	void withdraw()
	{
		checkbalance();
		dispatchcash();
		cout<<"\nWithdrawal Successful!";
	}
};
main()
{
	ATM at;
	at.withdraw();
}
