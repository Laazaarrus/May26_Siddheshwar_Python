#include <stdio.h>

struct Bio
{
    char description[500];
    int age;
};

struct InstaProfile
{
    char username[100];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile user =
    {
        "suraz_alr",
        600,
        {"Football", 19}
    };

    printf("Instagram Profile\n\n");

    printf("Username    : %s\n", user.username);
    printf("Followers   : %d\n", user.followers);
    printf("Description : %s\n", user.bio.description);
    printf("Age         : %d\n", user.bio.age);

    return 0;
}
