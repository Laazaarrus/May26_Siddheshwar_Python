#include <stdio.h>

int main()
{
    int likes;
    int *ptrLikes;


    likes = 50;

    
    ptrLikes = &likes;

    printf("\nValue of likes = %d", likes);

    printf("\nValue pointed to by ptrLikes = %d", *ptrLikes);

    printf("\nAddress stored in ptrLikes = %p", (void *)ptrLikes);

    return 0;
}
