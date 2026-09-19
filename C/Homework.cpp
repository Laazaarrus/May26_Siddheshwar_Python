#include <stdio.h>

int main()
{
    int n, i, j;
    int id[5];
    char name[5][10];
    int marks[5][4];
    int total;
    float pr;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &id[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        for(j = 0; j < 4; j++)
        {
            printf("Enter marks of Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n\n===== STUDENT REPORT =====\n");

    for(i = 0; i < n; i++)
    {
        total = 0;
        int pass = 1;

        printf("\nStudent %d\n", i + 1);
        printf("ID: %d\n", id[i]);
        printf("Name: %s\n", name[i]);

        for(j = 0; j < 4; j++)
        {
            printf("Subject %d Marks: %d\n", j + 1, marks[i][j]);

            total += marks[i][j];

            if(marks[i][j] < 35)
                pass = 0;
        }

        pr = (total / 400.0) * 100;

        printf("Total Marks: %d/400\n", total);
        printf("PR: %.2f%%\n", pr);

        if(pass)
            printf("Result: PASS\n");
        else
            printf("Result: FAIL\n");
    }

    return 0;
}
