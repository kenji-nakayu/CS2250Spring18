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
    item->itemPrice = 0;
    (*item).itemQuantity = 0;

    return;
}
void PrintItemCost(ItemToPurchase item)
{
    printf("%s %d @ $%d = $%d\n", item.itemName, item.itemQuantity,
            item.itemPrice, item.itemPrice * item.itemQuantity);

    return;
}
