#include<stdio.h>

int main()
{
    int guess;

    printf("Songs List:\n");
    printf("1. Lights out\n");
    printf("2. Switch\n");
    printf("3. Weird fishes\n");

    do
    {
        printf("\nGuess the song number (1-3): ");
        scanf("%d",&guess);

        if(guess==3)
        {
            printf("Correct!\n");
        }
        else
        {
            printf("Wrong song. Try Again.\n");
        }

    }while(guess!=3);

    return 0;
}
