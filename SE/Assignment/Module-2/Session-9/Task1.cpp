#include<stdio.h>

int main()
{
    int dailySteps[10];
    int i;

    for(i=0; i<10; i++)
    {
        printf("Enter steps for day %d: ", i+1);
        scanf("%d",&dailySteps[i]);
    }

    printf("\ndaily Steps:\n");

    for(i=0; i<10; i++)
    {
        printf("%d\n", dailySteps[i]);
    }

    return 0;
}
