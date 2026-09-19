#include<stdio.h>
struct student
{
	int id;
	char nm[10];
}st[10]; //array of structure
main()
{
	int n,i;
	printf("Enter number of Students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter an ID:");
		scanf("%d",&st[i].id);
		printf("Enter a Name:");
		scanf("%s",&st[i].nm);
	
	}
	for(i=0;i<n;i++)
	{
		printf("ID:%d",st[i].id);
		printf("\nName:%s",st[i].nm);
		printf("\n--------------\n");
	}
}
