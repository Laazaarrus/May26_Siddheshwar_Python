#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        int id;
        char name[20];
        int subjects;
        int marks;
        int total = 0;
        float pr;
        int pass = 1;

        printf("\nEnter ID: ");
        scanf("%d", &id);

        printf("Enter Name: ");
        scanf("%s", name);

        printf("Enter Number of Subjects: ");
        scanf("%d", &subjects);

        for(j = 0; j < subjects; j++)
        {
            printf("Enter Marks of Subject %d: ", j + 1);
            scanf("%d", &marks);

            total = total + marks;

            if(marks < 35)
            {
                pass = 0;
            }
        }

        pr = (float)total / subjects;

        printf("\nID: %d", id);
        printf("\nName: %s", name);
        printf("\nTotal: %d", total);
        printf("\nPercentage: %.2f", pr);

        if(pass == 1)
            printf("\nResult: PASS");
        else
            printf("\nResult: FAIL");

        printf("\n");
    }

    return 0;
}
