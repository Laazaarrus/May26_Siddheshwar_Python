#include <stdio.h>

int main()
{
    char items[3][20] = {"Pani puri", "Mojhito", "Burger"};
    int prices[3] = {40, 100, 200};
    int total = 0;
    int i;

    for(i = 0; i < 3; i++)
    {
        total += prices[i];
    }

    printf("Total price is: %d\n", total);

    return 0;
}
