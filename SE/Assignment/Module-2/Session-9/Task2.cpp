#include<stdio.h>

int main()
{
    int playlistratings[3][5];
    int i, s;

    for(i=0; i<3; i++)
    {
        printf("Enter ratings for Playlist %d:\n", i+1);

        for(s=0; s<5; s++)
        {
            scanf("%d",&playlistratings[i][s]);
        }
    }

    printf("\nRatings of Second Playlist:\n");

    for(s=0; s<5; s++)
    {
        printf("%d ", playlistratings[1][s]);
    }
    

    return 0;
}
