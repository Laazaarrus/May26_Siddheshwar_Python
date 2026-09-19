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

class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    void uploadVideo(string title)
    {
        cout << "Video " << title << " uploaded to " << channelName << endl;
    }
};

class GamingYouTuber : public YouTuber
{
public:
    void streamGame(string gameName)
    {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};

int main()
{
    GamingYouTuber g;

    g.username = "SurajGamer";
    g.followers = 10000;
    g.channelName = "Suraj Gaming";

    g.displayProfile();
    g.uploadVideo("Minecraft Gameplay");
    g.streamGame("Minecraft");

    return 0;
}
