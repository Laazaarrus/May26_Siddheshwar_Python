#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile("insta_followers.txt");

    outFile << "suraj123" << endl;
    outFile << "Kaustubh45" << endl;
    outFile << "Raj11" << endl;
    outFile << "Yash1717" << endl;
    outFile << "Aneree999" << endl;

    outFile.close();

    ifstream file("insta_followers.txt");

    string username;
    int count = 0;

    while (getline(file, username))
    {
        cout << username << endl;
        count++;
    }

    file.close();

    cout << "\nTotal followers listed: " << count << endl;

    return 0;
}
