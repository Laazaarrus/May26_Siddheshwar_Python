#include<stdio.h>
main()
//max number
{
	int n1,n2,n3;
	printf("Enter a Value:");
	scanf("%d", &n1);
	
	printf("Enter a Value:");
	scanf("%d", &n2);
	
	printf("Enter a Value:");
	scanf("%d", &n3);
	
	if(n1>n2 && n1>n3)
	{
	printf("n1 Value is max");
    }
	else if(n2>n3 && n2>n3)
    {
    printf("n2 Value is max");
    }
    else if(n3>n2 && n3>n1)
	{
	printf("n3 Value is max");
    }
    
}
	
