#include <iostream>
#include <string>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << title;

        if (isDone == true)
        {
            cout << " - DONE";
        }
        else
        {
            cout << " - NOT DONE";
        }

        cout << endl;
    }
};

int main()
{
    Task t1("Study Biology");

    t1.display();

    t1.markDone();

    t1.display();

    return 0;
}
