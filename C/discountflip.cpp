#include<stdio.h>

fdisct(float price, float discount, int member)
{
	float final_price;
	
	final_price = price - ((price*discount)/100);
	
	if (member)
	{
		 final_price = final_price - (final_price * 5 / 100);
	}
	
	return final_price;
}

main()
{
	int price;
	int discount=10;
	int member;
	
	printf("\nEnter the price of the product: ");
	scanf("%d",&price);
	
	printf("\nDiscount per. is:%d", discount);
	
	printf("\nAre you a member? (1 = Yes, 0 = No): ");
	scanf("%d",&member);
	
	if(member)
	{
		printf("\nmember=1");
    }
    else
    {
    	printf("\nmember=0");
	}
	
	printf("\nFinal Price:%d",fdisct(price,discount,member));

	
	
	
}
