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

    void togglePublic()
    {
        isPublic = !isPublic;
    }

    void display()
    {
        cout << "Is Public: " << boolalpha << isPublic << endl;
    }
};

int main()
{
    Playlist p1("My Favorites", "19-06-2006", true);

    cout << "Initial: ";
    p1.display();

    p1.togglePublic();
    cout << "After first toggle: ";
    p1.display();

    p1.togglePublic();
    cout << "After second toggle: ";
    p1.display();

    return 0;
}
