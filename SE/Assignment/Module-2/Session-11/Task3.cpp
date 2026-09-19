#include <stdio.h>

int main()
{
    int orders[5] = {400, 566, 145, 399, 999};
    int *ptr;
    int i;    

    ptr = orders;

    printf("Zomato Order Amounts and Their Memory Addresses:\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Order %d Amount = %d\tAddress = %p\n",
               i + 1, *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}
