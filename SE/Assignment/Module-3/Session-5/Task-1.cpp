#include <iostream>
using namespace std;

class PaymentProcessor
{
public:
    void processPayment(double amount)
    {
        cout << "processPayment(amount) called" << endl;
        cout << "Final amount: " << amount << endl;
    }

    void processPayment(double amount, string coupon)
    {
        cout << "processPayment(amount, coupon) called" << endl;

        if (coupon == "SAVE10")
            amount = amount - (amount * 0.10);

        cout << "Final amount: " << amount << endl;
    }
};

int main()
{
    PaymentProcessor p;

    p.processPayment(1000);
    cout << endl;

    p.processPayment(1000, "SAVE10");

    return 0;
}
