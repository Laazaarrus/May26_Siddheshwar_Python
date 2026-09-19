#include<stdio.h>
#include<string.h>
main()
{
	char str[10];
	int n;
	printf("Enter any string:");
	scanf("%s",&str);
	
	printf("\nMy name is: %s", str);
	n=strlen(str);
	printf("\nNumber of char:%d", n);
}
