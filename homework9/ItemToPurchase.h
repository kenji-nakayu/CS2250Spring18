/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchasewu.h
 *
 *    Description:  Homework 9 header file
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:52:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASEWU__INC__
#define  ITEMTOPURCHASEWU_INC__

// Constants
typedef struct ItemToPurchase_struct{
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;
}ItemToPurchase;

// Function Prototypes
void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif /* ----- #ifndef ITEMTOPURCHASEWU__INC__ ----- */

