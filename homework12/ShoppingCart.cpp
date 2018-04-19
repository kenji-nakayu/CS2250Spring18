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
    cartItems.push_back(item);

    return;
}

void ShoppingCart::RemoveItem(string name)
{
    for(int i = 0; i < cartItems.size(); ++i)
    {
        if( name == this->cartItems.at(i).GetName())
        {
            cartItems.erase(cartItems.begin() + i);
            return;
        }
    }

    cout << "Item not found in cart. Nothing removed." << endl;

    return;
}

void ShoppingCart::ModifyItem(ItemToPurchase item)
{
    for(int i = 0; i < cartItems.size(); ++i)
    {
        if(item.GetName() == this->cartItems.at(i).GetName())
        {
            if(item.GetDescription() != "none")
            {
            cartItems.at(i).SetDescription(item.GetDescription());
            }
            if(item.GetPrice() != 0)
            {
            cartItems.at(i).SetPrice(item.GetPrice());
            }
            if(item.GetQuantity() != 0)
            {
            cartItems.at(i).SetQuantity(item.GetQuantity());
            cartItems.at(i).SetTotalCost();
            }

            return;
        }

    }

    cout << "Item not found in cart. Nothing modified." << endl;

    return;
}

int ShoppingCart::GetNumItemsInCart()
{
    int num = 0; 
    for(int i = 0; i < cartItems.size(); ++i)
    {
        num = num + cartItems.at(i).GetQuantity();
    }
    return num; }

int ShoppingCart::GetCostOfCart()
{
    int temp = 0;

    for(int i = 0; i < cartItems.size(); ++i)
    {
        cartItems.at(i).SetTotalCost();
        temp = temp + cartItems.at(i).GetTotalCost();
    }

    return temp;
}

void ShoppingCart::PrintTotal()
{
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << this->GetNumItemsInCart() << endl << endl;

    if(cartItems.empty())
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }

    for(int i = 0; i < cartItems.size(); ++i)
    {
        cartItems.at(i).PrintItemCost();
    }

    cout << endl << "Total: $" << this->GetCostOfCart() << endl;
    return;
}

void ShoppingCart::PrintDescriptions()
{
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << endl << "Item Descriptions" << endl;

    for(int i = 0; i < cartItems.size(); ++i)
    {
        cartItems.at(i).PrintItemDescription();
    }
    return;
}
