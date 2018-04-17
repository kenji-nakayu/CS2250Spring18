/*
 * =====================================================================================
 *
 *       Filename:  Inventory.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:28:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  INVENTORY__INC__
#define  INVENTORY_INC__
using namespace std;
class InventoryItem {
    public:
        void PrintItem();
        InventoryItem(string initName = "", int initQty = 0);
    private:
        string itemName;  // Name of item
        int itemQuantity; // Number of items available
};
#endif /* ----- #ifndef INVENTORY__INC__ ----- */
