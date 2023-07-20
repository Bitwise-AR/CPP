#include <iostream>

using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no. " << counter + 1 << " : ";
    cin >> itemId[counter];
    cout << "Enter Price of your item. " << counter + 1 << " : ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop mart;
    mart.initcounter();
    cout << "Enter the no. of items : " ;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        mart.setPrice();
    }
    
    mart.displayPrice();
    return 0;
}