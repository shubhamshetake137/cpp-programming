#include <iostream>
using namespace std;

class Product
{
    int productID;
    string name;
    float price;
    int quantity;

public:

    Product(int id, string n, float p, int q)
    {
        productID = id;
        name = n;
        price = p;
        quantity = q;
    }

    void display()
    {
        float totalCost = price * quantity;

        cout << "Product ID : " << productID << endl;
        cout << "Name       : " << name << endl;
        cout << "Price      : " << price << endl;
        cout << "Quantity   : " << quantity << endl;
        cout << "Total Cost : " << totalCost << endl;
    }
};

int main()
{
    Product p1(101, "Laptop", 50000, 2);

    p1.display();

    return 0;
}
