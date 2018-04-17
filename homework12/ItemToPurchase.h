#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H


#include <string>
using namespace std;

class ItemToPurchase 
{

    public:
        ItemToPurchase();
        ItemToPurchase(string name, string description, 
                int price, int quantity = 1);

        void SetName(string name);
        void SetDescription(string description);
        void SetPrice(int price);
        void SetQuantity(int quantity);
        void SetTotalCost();

        string GetName() const;
        string GetDescription() const;
        int GetPrice() const;
        int GetQuantity() const;
        int GetTotalCost() const;

        void PrintItemCost();
        void PrintItemDescription();

    private:
        string itemName;
        string itemDescription;
        int itemPrice;
        int itemQuantity;
        int totalCost;
};


#endif
