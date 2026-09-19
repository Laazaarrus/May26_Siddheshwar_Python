#include <stdio.h>

main()
{
    char playlistName[] = "My Favorites";
    int totalSongs = 50;
    float avgDuration = 3.8;

    printf("My favorite Spotify playlist is %s, it has %d songs and the average song duration is %.1f minutes.",
           playlistName, totalSongs, avgDuration);
}
