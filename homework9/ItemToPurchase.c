/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  Warmup function definition file
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:53:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ItemToPurchase.h"
#include <string.h>

// Function Definitions
void MakeItemBlank(ItemToPurchase* item)
{
    strcpy(item->itemName, "none\0");
    strcpy(item->itemDescription, "none\0");
    item->itemPrice = 0;
    (*item).itemQuantity = 0;

    return;
}
void PrintItemCost(ItemToPurchase item)
{
    printf("%s %d @ $%d = $%d\n", item.itemName, item.itemPrice,
            item.itemQuantity, item.itemPrice * item.itemQuantity);

    return;
}
void PrintItemDescription(ItemToPurchase item)
{
    printf("%s: %s\n", item.itemName, item.itemDescription);

    return;
}
