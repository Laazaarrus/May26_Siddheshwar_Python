#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;
};

int main()
{
    vector<Content> list;

    ifstream file("content_list.txt");

    Content c;

    while (getline(file, c.title, '|'))
    {
        string views;

        getline(file, c.platform, '|');
        getline(file, views, '|');
        getline(file, c.status);

        c.views = atoi(views.c_str());

        list.push_back(c);
    }

    file.close();

    cout << "Content List:\n";

    for (int i = 0; i < list.size(); i++)
    {
        cout << i + 1 << ". "
             << list[i].title << " - "
             << list[i].platform << endl;
    }

    int choice;

    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if (choice >= 1 && choice <= list.size())
    {
        list.erase(list.begin() + choice - 1);

        ofstream outFile("content_list.txt");

        for (int i = 0; i < list.size(); i++)
        {
            outFile << list[i].title << "|"
                    << list[i].platform << "|"
                    << list[i].views << "|"
                    << list[i].status << endl;
        }

        outFile.close();

        cout << "\nContent deleted successfully.\n";

        cout << "\nUpdated List:\n";

        for (int i = 0; i < list.size(); i++)
        {
            cout << i + 1 << ". "
                 << list[i].title << " - "
                 << list[i].platform << endl;
        }
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
