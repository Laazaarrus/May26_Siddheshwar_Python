#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem menu[3] =
    {
        {"Allo paratha", 200.0, 4.0},
        {"icecream", 40.0, 5.0},
        {"pizza", 600.0, 5.0}
    };

    int i;

    printf("Zomato Menu:\n\n");

    for(i = 0; i < 3; i++)
    {
        printf("Item %d\n", i + 1);
        printf("Name   : %s\n", menu[i].itemName);
        printf("Price  : %.2f\n", menu[i].price);
        printf("Rating : %.1f\n\n", menu[i].rating);
    }

    return 0;
}
