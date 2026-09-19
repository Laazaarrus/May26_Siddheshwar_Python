#include<stdio.h>
main()
{
    char name[10]
	FILE *myfile;
	myfile=fopen("hello.txt","w");
	
	printf("Enter your name:");
	scanf("%s",&name);
	
	fprintf(myfile,name);
}
