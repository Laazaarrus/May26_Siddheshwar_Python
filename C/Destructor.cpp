#include<iostream>
using namespace std;
class stdata 
{
	public:
	stdata(int pk)
	{
		if (pk==1234)
		{
			cout<<"Welcome.";
		}
		else
		{
			cout<<"Try again.";
		}
	}
	~stdata() //destructor
	{
		cout<<"\nGood! Now you are free!";
	}
};
main()
{
	int key;
	cout<<"Enter your Key:";
	cin>>key;
	stdata st(key);
}
