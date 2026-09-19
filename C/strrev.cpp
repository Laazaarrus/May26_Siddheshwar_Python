#include<stdio.h>
#include<string.h>
main()
{
	char str[10];
	printf("Enter any string:");
	scanf("%s",&str);
	
	printf("\nOriginal string:%s",str);
	printf("\nRev string:%s",strrev(str));
}
