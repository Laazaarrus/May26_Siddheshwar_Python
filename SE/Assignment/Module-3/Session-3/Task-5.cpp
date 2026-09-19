#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;

    Playlist(string n)
    {
        name = n;

        cout << "Playlist created: " << name << endl;
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");

        if (file.is_open())
        {
            file << "Playlist Name: " << name << endl;

            file.close();

            cout << "Playlist auto-saved!" << endl;
        }
        else
        {
            cout << "Unable to save playlist." << endl;
        }
    }
};

int main()
{
    Playlist p1("My Favourites");

    cout << "Playlist is active." << endl;

    return 0;
}
