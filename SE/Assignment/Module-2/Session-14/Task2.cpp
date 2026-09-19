#include <stdio.h>


int isEven(int num)
{
   
    if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number = 10;

    if(isEven(number))
    {
        printf("\n%d is Even", number);
    }
    else
    {
        printf("\n%d is Odd", number);
    }

    return 0;
}
