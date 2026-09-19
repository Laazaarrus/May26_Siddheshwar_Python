#include<iostream>
using namespace std;
main()
{
	FILE *file;
	int id,n,i;
	char name[10];
	file=fopen("stdata.txt","a");
	cout<<"Enter Number Of Students:";
	cin>>n;
	for (i=0;i<n;i++)
	{
	cout<<"Enter an ID:";
	cin>>id;
	cout<<"Enter a Name:";
	cin>>name;
	fprintf(file,"\nID:%d",id);
	fprintf(file,"\nName:%s",name);
	}
	
}
