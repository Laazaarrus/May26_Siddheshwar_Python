#include <iostream>
#include <string>
using namespace std;

class Movie
{
public:
    string title;
    string genre;
    float rating;

    Movie(string t, string g, float r)
    {
        title = t;
        genre = g;
        rating = r;
    }

    Movie(const Movie &m)
    {
        title = m.title;
        genre = m.genre;
        rating = m.rating;
    }

    void display()
    {
        cout << "Movie Title: " << title << endl;
        cout << "Genre: " << genre << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main()
{
    Movie original("Interstellar", "Science Fiction", 8.7);

    Movie copied(original);

    cout << "Original Movie:" << endl;
    original.display();

    cout << "\nCopied Movie:" << endl;
    copied.display();

    return 0;
}
