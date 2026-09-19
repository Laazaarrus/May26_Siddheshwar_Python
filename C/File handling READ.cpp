#include<iostream>
using namespace std;
main()
{
	FILE *file;
	char str[100];
	file=fopen("stdata.txt","r");
	//fscanf(file,"%s",&str);
	//cout<<str;
	
/*	while(fscanf(file,"%s",&str)!=EOF);
	{
		cout<<str<<"\n";
	}*/
	
	while(fgets(str,100,file))
	{
		cout<<str;
	}
}
