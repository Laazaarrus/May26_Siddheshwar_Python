#include <iostream>
using namespace std;
struct student
{
	int id;
	string name; //within its own block, only variable declaration
}st; //object of structure
main()
{
    	cout<<"Enter an ID:";
    	cin>>st.id;
    	cout<<"Enter a name:";
    	cin>>st.name;
    	cout<<"\nID:"<<st.id;
    	cout<<"\nName:"<<st.name;
}
