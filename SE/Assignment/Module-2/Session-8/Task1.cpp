#include<stdio.h>

void getUserInitials(char first, char last)
{
    printf("Initials: %c%c", first, last);
}

int main()
{
    char first, last;

    printf("Enter 1st initial: ");
    scanf(" %c",&first);

    printf("Enter last initial: ");
    scanf(" %c",&last);

    getUserInitials(first, last);

    return 0;
}
