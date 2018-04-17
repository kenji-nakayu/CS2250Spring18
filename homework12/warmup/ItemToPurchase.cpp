#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase()
{    itemName = "none"; itemPrice = 0; itemQuantity = 0; }

void ItemToPurchase::SetName(string name)
{    itemName = name; }

void ItemToPurchase::SetPrice(int price)
{    itemPrice = price; }

void ItemToPurchase::SetQuantity(int quantity)
{    itemQuantity = quantity; }

string ItemToPurchase::GetName() const
{    return this->itemName; }

int ItemToPurchase::GetPrice() const
{    return this->itemPrice; }

int ItemToPurchase::GetQuantity() const
{    return this->itemQuantity; }
