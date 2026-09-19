#include<stdio.h>

struct student
{
	float s1,s2,s3,s4;
	float total,per;
}st[10];

main()
{
	int n,i;
	printf("Enter number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nStudent %d\n",i+1);

		printf("Enter marks of subject 1:");
		scanf("%f",&st[i].s1);

		printf("Enter marks of subject 2:");
		scanf("%f",&st[i].s2);

		printf("Enter marks of subject 3:");
		scanf("%f",&st[i].s3);

		printf("Enter marks of subject 4:");
		scanf("%f",&st[i].s4);

		st[i].total=st[i].s1+st[i].s2+st[i].s3+st[i].s4;
		st[i].per=st[i].total/4;
	}

	for(i=0;i<n;i++)
	{
		printf("\nTotal Marks=%f",st[i].total);
		printf("\nPercentage=%f",st[i].per);
		printf("\n--------------\n");
	}
}
