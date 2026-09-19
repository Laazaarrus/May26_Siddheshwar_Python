#include <iostream>
using namespace std;

class SocialMediaUser
{
public:
    string username;
    int followers;

    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class InstagramInfluencer : public SocialMediaUser
{
public:
    void postStory(string storyTitle)
    {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main()
{
    InstagramInfluencer i;

    i.username = "Suraj";
    i.followers = 8000;

    i.displayProfile();
    i.postStory("My New Trip to Portugal!");

    return 0;
}
