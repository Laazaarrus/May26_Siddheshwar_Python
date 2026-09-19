#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("content_list.txt");

    string title, platform, views, status;
    int number = 1;

    while (getline(file, title, '|'))
    {
        getline(file, platform, '|');
        getline(file, views, '|');
        getline(file, status);

        cout << number << ". "
             << title << " - "
             << platform << endl;

        number++;
    }

    file.close();

    return 0;
}
