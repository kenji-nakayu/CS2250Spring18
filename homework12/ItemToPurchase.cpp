#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase()
{    itemName = "none"; itemDescription = "none";
     itemPrice = 0; itemQuantity = 0;
     totalCost = 0;     }

ItemToPurchase::ItemToPurchase(string name, string description,
        int price, int quantity)
{    itemName = name; itemDescription = description;
     itemPrice = price; itemQuantity = quantity;
     totalCost = price * quantity;    }

void ItemToPurchase::SetName(string name)
{    itemName = name; }

void ItemToPurchase::SetDescription(string description)
{    itemDescription = description; }

void ItemToPurchase::SetPrice(int price)
{    itemPrice = price; }

void ItemToPurchase::SetQuantity(int quantity)
{    itemQuantity = quantity; }

void ItemToPurchase::SetTotalCost()
{    totalCost = itemPrice * itemQuantity; }

string ItemToPurchase::GetName() const
{    return this->itemName; }

string ItemToPurchase::GetDescription() const
{    return this->itemDescription; }

int ItemToPurchase::GetPrice() const
{    return this->itemPrice; }

int ItemToPurchase::GetQuantity() const
{    return this->itemQuantity; }

int ItemToPurchase::GetTotalCost() const
{    return this->totalCost; }

void ItemToPurchase::PrintItemCost()
{
    cout << this->itemName << " " << this->itemQuantity << " @ $";
    cout << this->itemPrice << " = $" << this->totalCost << endl;

    return;
}

void ItemToPurchase::PrintItemDescription()
{
    cout << this->itemName << ": " << this->itemDescription << endl;
    return;
}
