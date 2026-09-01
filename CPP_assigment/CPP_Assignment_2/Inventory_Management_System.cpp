/*Design a class Product with the following private data members:
int productId
string name
double price
int quantit*/

#include <iostream>
using namespace std;

class Product
{
    int productId;
    string name;
    double price;
    int quantity;

public:
    void acceptDetails()
    {
        cout << "Enter the productId" << endl;
        cin >> productId;
        cout << "Enter the Name" << endl;
        cin >> name;
        cout << "Enter the Price" << endl;
        cin >> price;
        cout << "Enter the Quantity" << endl;
        cin >> quantity;
    }

    void displayDetails() const
    {
        {
        cout << productId << "\t"
             << name << "\t"
             << price << "\t"
             << quantity << "\t"
             << totalValue();

        if (quantity < 10)
        {
            cout << "  <- LOW STOCK";
        }

        cout << endl;
        }
    }


    double totalValue() const{
        double totalValue = price * quantity;
        return totalValue;
    }

    bool isLowStock(int threshold) const {
        return quantity < threshold;


    }

};

int main()
{
    // Array of 5 Product objects
    Product product[5];

    // Accept details
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for Product " << i + 1 << endl;
        product[i].acceptDetails();
    }

    // Display all products
    cout << "\n===== INVENTORY REPORT =====" << endl;
    cout << "ID\tName\tPrice\tQty\tTotal Value" << endl;

    for (int i = 0; i < 5; i++)
    {
        product[i].displayDetails();
    }

    // Find highest total value
    int maxIndex = 0;

    for (int i = 1; i < 5; i++)
    {
        if (product[i].totalValue() > product[maxIndex].totalValue())
        {
            maxIndex = i;
        }
    }

    cout << "\nHighest Value Product:" << endl;
    product[maxIndex].displayDetails();

    // Find low-stock products
    int threshold;

    cout << "\nEnter stock threshold: ";
    cin >> threshold;

    cout << "\nLow Stock Products:" << endl;

    for (int i = 0; i < 5; i++)
    {
        if (product[i].isLowStock(threshold))
        {
            product[i].displayDetails();
        }
    }

    return 0;
}