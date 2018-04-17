#include <iostream>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() 
{
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date) 
{
    customerName = name;
    currentDate = date;
}

string ShoppingCart::GetCustomerName() const
{    return this->customerName; }

string ShoppingCart::GetDate() const
{    return this->currentDate; }

void ShoppingCart::AddItem(ItemToPurchase item)
{
    cout << "FIXME: implement Add Item function" << endl;

    return;
}

void ShoppingCart::RemoveItem(string name)
{
    cout << "FIXME: implement Remove Item function" << endl;
    return;
}

void ShoppingCart::ModifyItem(ItemToPurchase item)
{
    cout << "FIXME: implement Modify Item function" << endl;
    return;
}

int ShoppingCart::GetNumItemsInCart()
{    return this->cartItems.size(); }

double ShoppingCart::GetCostOfCart()
{
    double temp = 0;

    return temp;
}

void ShoppingCart::PrintTotal()
{
    return;
}

void ShoppingCart::PrintDescriptions()
{
    return;
}
