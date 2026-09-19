#include <iostream>
using namespace std;

class Ticket
{
public:
    Ticket()
    {
        cout << "Ticket booked successfully!" << endl;
    }

    ~Ticket()
    {
        cout << "Saving your ticket..." << endl;
    }
};

int main()
{
    Ticket *t1 = new Ticket();

    cout << "Ticket is active." << endl;

    delete t1;

    cout << "Ticket object deleted." << endl;

    return 0;
}
