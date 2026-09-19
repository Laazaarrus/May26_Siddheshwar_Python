#include <iostream>
#include <string>
using namespace std;

struct OrderData
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(OrderData data)
    {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void markDelivered()
    {
        isDelivered = true;

        cout << "Order " << orderId << " has been delivered!" << endl;
    }

    void display()
    {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Delivered: " << boolalpha << isDelivered << endl;
    }
};

int main()
{
    OrderData data = {101, "Pizza Hut", false};

    FoodOrder order1(data);

    order1.display();

    order1.markDelivered();

    return 0;
}
