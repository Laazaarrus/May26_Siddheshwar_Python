#include <iostream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool p)
    {
        name = n;
        createdOn = date;
        isPublic = p;
    }

    void display()
    {
        cout << "Playlist Name: " << name << endl;
        cout << "Created On: " << createdOn << endl;
        cout << "Is Public: " << boolalpha << isPublic << endl;
    }
};

int main()
{
    Playlist p1("My Favs", "19-06-2006", true);

    p1.display();

    return 0;
}
