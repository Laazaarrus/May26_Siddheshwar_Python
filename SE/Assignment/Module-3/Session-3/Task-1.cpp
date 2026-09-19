#include <iostream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;

    Playlist()
    {
        name = "My Favourites";

        cout << "Welcome to your playlist!" << endl;
    }

    void display()
    {
        cout << "Playlist Name: " << name << endl;
    }
};

int main()
{
    Playlist p1;

    p1.display();

    return 0;
}
