#include<stdio.h>
main()
{
	int total;
	printf("Enter total value of the cart: ");
	scanf("%d",&total);
	
	if(total>=2000)
	{
		printf("\nYou are eligible to get twenty percent discount!");
		printf("\nFinal value for cart: %d", total-(20*(total/100)));
	}
	else if(total>=1000)
	{
		printf("\nYou are eligible to get ten percent discount!");
		printf("\nFinal value for cart: %d", total-(10*(total/100)));
	}
	else
	{
		printf("\nYou are not eligible for no discounts");
	}
}
