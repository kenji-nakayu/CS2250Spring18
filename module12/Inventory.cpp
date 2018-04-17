/*
 * =====================================================================================
 *
 *       Filename:  Inventory.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:32:07 AM
 *       Revision:  none
 *       Compiler:  g++ for C++, gcc for C
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream> //For C++
using namespace std; //For C++
#include <string>
#include <vector>

#include "Inventory.h"
// Function Definitions

// InventoryItem Constructor
InventoryItem::InventoryItem(string initName, int initQty) {
    itemName = initName;
    itemQuantity = initQty;
    return;
}

// InventoryItem function to print name/qty attributes
void InventoryItem::PrintItem() {
    cout << "name: " << this->itemName << ", " << "quantity: "
        << this->itemQuantity << endl;
    return;
}


