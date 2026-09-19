#include <stdio.h>

int main()
{
    int n, i, j;
    int id[5];
    char name[5][20];
    int marks[5][4];
    int total;
    float pr;
    int pass;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &id[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        for(j = 0; j < 4; j++)
        {
            printf("Enter Marks of Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        total = 0;
        pass = 1;

        for(j = 0; j < 4; j++)
        {
            total = total + marks[i][j];

            if(marks[i][j] < 35)
            {
                pass = 0;
            }
        }

        pr = (total / 400.0) * 100;

        printf("\nID: %d", id[i]);
        printf("\nName: %s", name[i]);
        printf("\nTotal Marks: %d", total);
        printf("\nPR: %.2f", pr);

        if(pass == 1)
            printf("\nResult: PASS");
        else
            printf("\nResult: FAIL");

        printf("\n");
    }

    return 0;
}

