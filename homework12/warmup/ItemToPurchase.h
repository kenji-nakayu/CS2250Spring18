#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H


#include <string>
using namespace std;

class ItemToPurchase 
{

    public:
        ItemToPurchase();

        void SetName(string name);
        void SetPrice(int price);
        void SetQuantity(int quantity);

        string GetName() const;
        int GetPrice() const;
        int GetQuantity() const;

        void PrintItemCost();

    private:
        string itemName;
        int itemPrice;
        int itemQuantity;
};


#endif
