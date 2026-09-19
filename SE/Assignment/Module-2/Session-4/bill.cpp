#include<stdio.h>


void calc(int a, int b)
{
	printf("Total bill: %d", a*b);
}

main()
{
	int a,b;
	printf("Enter the price of the item:");
	scanf("%d",&a);
	
	printf("Enter number of items:");
	scanf("%d",&b);
	
	calc(a,b);
}
