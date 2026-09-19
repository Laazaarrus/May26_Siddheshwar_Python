#include <stdio.h>
main()

{
    int n,i;
    int id[5];
    char name[5][10];
    printf("Enter the no. of students:");
    scanf("%d",&n);
for (i=0;i<n;i++);
    {   
    	printf("Enter your ID:");
    	scanf("%d",&id[i]);
    	printf("Enter your name:");
    	scanf("%s",&name[i]);
	}
	for (i=0;i<n;i++);
	{
		printf("\nID:%d",&id[i]);
		printf("\nName:%s",&name[i]);	
	}
}
