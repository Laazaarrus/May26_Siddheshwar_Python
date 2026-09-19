#include<stdio.h>
#include<string.h>
main()
{
	char pass[10], cpass[10];
	printf("Enter password:");
	scanf("%s",&pass);
	
	printf("Enter Confirmed Password:");
	scanf("%s",cpass);
	//strcmpi = makes insensitive
	if(strcmp(pass,cpass)==0)
	{
		printf("\nLogged in");
	}
	
	else 
	{
		printf("\n Password does not match!");
	}
}
