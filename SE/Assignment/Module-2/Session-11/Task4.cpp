#include <stdio.h>


void incrementFollowers(int *followers, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 1000;
    }
}

int main()
{
    int followers[5] = {128, 445, 293, 333, 444};
    int i;

    incrementFollowers(followers, 5);

    printf("Updated Insta followers count:\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Friend %d Followers = %d\n", i + 1, followers[i]);
    }

    return 0;
}
