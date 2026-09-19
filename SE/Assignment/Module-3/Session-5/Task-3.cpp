#include <iostream>
using namespace std;

class Flipkart
{
public:
    void searchProduct(string productName)
    {
        cout << "Searching for product: " << productName << endl;
    }

    void searchProduct(string productName, string category)
    {
        cout << "Searching for " << productName
             << " in category: " << category << endl;
    }
};

int main()
{
    Flipkart f;

    f.searchProduct("iPhone 15");
    cout << endl;

    f.searchProduct("iPhone 15", "Mobiles");

    return 0;
}
