#include <iostream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    string songs[10];
    int songCount;

    Playlist(string n, string date, bool p)
    {
        name = n;
        createdOn = date;
        isPublic = p;
        songCount = 0;
    }

    void addSong(string songTitle)
    {
        if (songCount < 10)
        {
            songs[songCount] = songTitle;
            songCount++;
        }
        else
        {
            cout << "Playlist is full!" << endl;
        }
    }

    void displaySongs()
    {
        cout << "Playlist: " << name << endl;
        cout << "Songs:" << endl;

        for (int i = 0; i < songCount; i++)
        {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main()
{
    Playlist p1("My Favorites", "19-06-2006", true);

    p1.addSong("All the stars");
    p1.addSong("hard on yourself");
    p1.addSong("Mice on venus");

    p1.displaySongs();

    return 0;
}
