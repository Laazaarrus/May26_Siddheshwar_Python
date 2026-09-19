#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    if(fp == NULL)
    {
        printf("File could not open.");
        return 1;
    }

    fprintf(fp, "How long\n");
    fprintf(fp, "wonder\n");

    fclose(fp);

    printf("Songs appended successfully.");

    return 0;
}
