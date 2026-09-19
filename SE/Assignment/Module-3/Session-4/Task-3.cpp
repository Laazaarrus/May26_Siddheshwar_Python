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

class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

int main()
{
    Podcaster p;

    p.username = "Suraj";
    p.followers = 3000;
    p.podcastName = "The Suraj Podcast";

    p.displayProfile();
    p.publishEpisode("Episode 7");

    return 0;
}
