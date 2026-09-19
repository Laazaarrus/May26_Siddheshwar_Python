#include<stdio.h>
main()
//true statement
{
	int age;
	printf("Enter your age:");
	scanf("%d", &age);
	
	if(age>=19)
	{
		printf("You're eligible for driving.");
	}
	{
		printf("You're not eligible for driving!");
	}
}
	
