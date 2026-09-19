#include<stdio.h>
main()
{
	char str[100];
	FILE *myfile;
	myfile=fopen("hello.txt","r");
	//fgets(str,100,myfile);
	
	while(fgets(str,100,myfile))
	{
		printf("%s",str);
	}
}
