#include<stdio.h>
#include<string.h>

int main()
{
    char user1[30], user2[30];

    printf("Enter 1st Username: ");
    scanf("%s", user1);

    printf("Enter 2nd Username: ");
    scanf("%s", user2);

    if(strcmp(user1, user2)==0)
    {
        printf("Both usernames are same.");
    }
    else
    {
        printf("Both usernames are diff.");
    }

    return 0;
}
