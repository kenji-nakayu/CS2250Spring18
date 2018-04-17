#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// Main Function
int main() 
{
    string tempN;
    int tempP, tempQ;

    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    getline( cin, tempN);
    cout << "Enter the item price:" << endl;
    cin >> tempP;
    cout << "Enter the item quantity:" << endl;
    cin >> tempQ;
    cin.ignore();

    ItemToPurchase item1;
    item1.SetName(tempN);
    item1.SetPrice(tempP);
    item1.SetQuantity(tempQ);

    cout << endl;
    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    getline( cin, tempN);
    cout << "Enter the item price:" << endl;
    cin >> tempP;
    cout << "Enter the item quantity:" << endl;
    cin >> tempQ;

    ItemToPurchase item2;
    item2.SetName(tempN);
    item2.SetPrice(tempP);
    item2.SetQuantity(tempQ);

    cout << endl;

    cout << "TOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $";
    cout << item1.GetPrice() << " = $";
    cout << item1.GetPrice() * item1.GetQuantity() << endl;

    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $";
    cout << item2.GetPrice() << " = $";
    cout << item2.GetPrice() * item2.GetQuantity() << endl;

    cout << endl << "Total: $";
    cout << (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity()) << endl;

    return 0;
}
