#include<stdio.h>
main()
{
	int like,share,comment;
	
	printf("Check if post is trend");
	
	printf("\nEnter your like:");
	scanf("%d",&like);

	printf("\nEnter your share:");
	scanf("%d",&share);
	
	printf("\nEnter your comment:");
	scanf("%d",&comment);

	
	if(like>=1000 , comment>=200 && share>=50)
	{
		printf("\nYour post is trending.");
	}
	else
	{
		printf("\nYour post is not trending.");
	}
}
