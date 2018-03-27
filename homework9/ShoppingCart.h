/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  Homework 9 shopping cart header file
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:59:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART_INC__

// Constants
typedef struct ShoppingCart_struct{
    char customerName[50];
    char currentDate[50];
    ItemToPurchase cartItems[10];
    int cartSize;
} ShoppingCart;

// Function Prototypes
ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart);
ShoppingCart RemoveItem(char name[], ShoppingCart cart);
ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

