#include<stdio.h>
#include<string.h>
main()
{
	char str[10], newstr[10];
	printf("Enter any string:");
	scanf("%s",&str);
	strcpy(newstr,str);
	
	printf("\nCopied string:%s",newstr);
}
