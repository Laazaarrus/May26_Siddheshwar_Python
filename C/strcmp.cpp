#include<stdio.h>
#include<string.h>
main()
{
	char fname[10],lname[10],fullname[30]
	
	printf("Enter your Firstname:");
	scanf("%s",&fname);
	
	printf("Enter you Lastname");
	scanf("%s",&lname);
	
	printf("\nYour fullname:%s",strcat(fname,lname));
}
