/*
 * =====================================================================================
 *
 *       Filename:  mainwu.c
 *
 *    Description:  Warm up for Programming Assignment 9
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:52:00 AM
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

// Main Function
int main()
{
    ItemToPurchase items[2];

    for(int i = 0; i < 2; i++)
    {
        printf("Item %d\n", i + 1);
        printf("Enter the item name:\n");
        fgets(items[i].itemName, sizeof(items[i].itemName), stdin);
        items[i].itemName[strlen(items[i].itemName) - 1] = '\0';
        //fflush(stdin);
        printf("Enter the item price:\n");
        scanf("%d", &items[i].itemPrice);
        printf("Enter the item quantity:\n");
        scanf("%d", &items[i].itemQuantity);
        //fflush(stdin);
        printf("\n");
        getchar();
    }

    printf("TOTAL COST\n");
    PrintItemCost(items[0]);
    PrintItemCost(items[1]);
    printf("\nTotal: $%d\n",
            (items[0].itemPrice * items[0].itemQuantity) +
            (items[1].itemPrice * items[1].itemQuantity));


    return 0;
}
