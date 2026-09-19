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

    for (int i = 0; i < list.size(); i++)
    {
        cout << i + 1 << ". "
             << list[i].title << " - "
             << list[i].platform << " - "
             << list[i].status << endl;
    }

    int choice;

    cout << "\nEnter content number to update: ";
    cin >> choice;
    cin.ignore();

    if (choice >= 1 && choice <= list.size())
    {
        cout << "Enter new status: ";
        getline(cin, list[choice - 1].status);

        ofstream outFile("content_list.txt");

        for (int i = 0; i < list.size(); i++)
        {
            outFile << list[i].title << "|"
                    << list[i].platform << "|"
                    << list[i].views << "|"
                    << list[i].status << endl;
        }

        outFile.close();

        cout << "Status updated successfully." << endl;
    }

    return 0;
}
