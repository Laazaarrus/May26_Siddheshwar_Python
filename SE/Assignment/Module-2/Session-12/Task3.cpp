#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
};

struct MovieShow
{
    char movie[50];
    int screen;
    struct Time showTime;
};

int main()
{
    struct MovieShow show = {"Doom", 4, {8, 40}};

    printf("Movie: %s\n", show.movie);
    printf("Screen: %d\n", show.screen);
    printf("Time: %02d:%02d\n",
           show.showTime.hours,
           show.showTime.minutes);

    return 0;
}
