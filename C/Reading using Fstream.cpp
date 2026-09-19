#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string str;
	ifstream file("new.txt");
	
    for(;getline(file,str);)
	{
	cout<<str<<"\n";
    }
    file.close();
}
