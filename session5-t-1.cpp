#include <iostream>
using namespace std;

class PaymentProcessor
{
public:
   
    void processPayment(double amount)
    {
        cout << "Payment method: Amount only";
        cout << "Final Amount: " << amount;
    }

    
    void processPayment(double amount, string couponCode)
    {
        cout << "Payment method: Amount + Coupon";

        if (couponCode == "SAVE10")
        {
            amount = amount - (amount * 0.10);
        }

        cout << "Final Amount: " << amount;
    }
};

int main()
{
    PaymentProcessor p;

    p.processPayment(1000);

    p.processPayment(1000, "SAVE10");

    return 0;
}
