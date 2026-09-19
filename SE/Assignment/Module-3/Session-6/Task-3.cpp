#include <iostream>
using namespace std;

class Product
{
public:
    virtual void upload() = 0;
};

class Electronics : public Product
{
public:
    void upload() override
    {
        cout << "Uploading electronics product to Flipkart" << endl;
    }
};

class Clothing : public Product
{
public:
    void upload() override
    {
        cout << "Uploading clothing product to Flipkart" << endl;
    }
};

int main()
{
    Electronics e;
    Clothing c;

    e.upload();
    c.upload();

    return 0;
}
