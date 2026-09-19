#include<stdio.h>

int main()
{
    int rows, i, j, s;

    printf("Enter number off row: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }

        for(s=1; s<=2*i-1; s++)
        {
            printf("~");
        }

        printf("\n");
    }

    return 0;
}
