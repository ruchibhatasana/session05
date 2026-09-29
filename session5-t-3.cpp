#include <iostream>
using namespace std;

class ProductSearch
{
public:
    void searchProduct(string productName)
    {
        cout << "Searching for: " << productName;
        cout << "Product found: " << productName;
    }

    void searchProduct(string productName, string category)
    {
        cout << "Searching for: " << productName << endl;
        cout << "Category: " << category;
        cout << "Product found: " << productName
             << " in " << category;
    }
};

int main()
{
    ProductSearch p;

    p.searchProduct("Laptop");

    cout << endl;

    p.searchProduct("Laptop", "Electronics");

}
