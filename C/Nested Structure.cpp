#include<stdio.h>
struct Address
{
	int pin;
	char city[10];
}; 
struct Student
{
    int id;
	char name[10];
	struct Address ad;
}st;
main()
{
	printf("Enter ID:");
	scanf("%d",&st.id);
	printf("Enter a Name:");
	scanf("%s",&st.name);
	printf("Enter City:");
	scanf("%s",&st.ad.city);
	printf("Enter Pincode:");
	scanf("%d",&st.ad.pin);
	
	printf("\nID:%d",st.id);
	printf("\nName:%s",st.name);
	printf("\nCity:%s",st.ad.city);
	printf("\nPincode:%d",st.ad.pin);
}
