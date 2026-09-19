#include<stdio.h>
struct student
{
	int id;
	char nm[10],city[10];
}st;
main()
{
    //student st;
	printf("Enter an ID:");
    scanf("%d",&st.id);
    printf("Enter your name:");
    scanf("%s",&st.nm);
    printf("Enter your city:");
    scanf("%s",&st.city);
    
    printf("\nID:%d",st.id);
    printf("\nName:%s",st.nm);
    printf("\nCity:%s",st.city);
}
