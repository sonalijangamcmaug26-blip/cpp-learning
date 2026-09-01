#include <iostream>
using namespace std;

// Integer quantity
double reorderCost(int qty, double unitPrice)
{
    return qty * unitPrice;
}

// Fractional quantity
double reorderCost(double qty, double unitPrice)
{
    return qty * unitPrice;
}

// Integer quantity with tax
double reorderCost(int qty, double unitPrice, double taxRate)
{
    double cost = qty * unitPrice;

    return cost + (cost * taxRate / 100);
}

// Default argument
double applyDiscount(double price, double discountPercent = 10.0)
{
    return price - (price * discountPercent / 100);
}

int main()
{
    double result;

    // Version 1
    result = reorderCost(10, 50.0);
    cout << "Reorder Cost (int): " << result << endl;

    // Version 2
    result = reorderCost(10.5, 50.0);
    cout << "Reorder Cost (double): " << result << endl;

    // Version 3
    result = reorderCost(10, 50.0, 18.0);
    cout << "Reorder Cost with Tax: " << result << endl;

    // Default 10% discount
    result = applyDiscount(1000);
    cout << "Price after default discount: "
         << result << endl;

    // Custom discount
    result = applyDiscount(1000, 20);
    cout << "Price after 20 percent discount: "
         << result << endl;

    return 0;
}