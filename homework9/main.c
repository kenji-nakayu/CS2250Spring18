/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Homework 9
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:44:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ShoppingCart.h"
#include <string.h>


// Main Function
int main(void)
{
    ShoppingCart userCart;
    for(int i = 0; i < 10; ++i)
    {
        MakeItemBlank(&userCart.cartItems[i]);
    }

    printf("Enter Customer's Name:\n");
    fgets(userCart.customerName, 50, stdin);
    userCart.customerName[strlen(userCart.customerName) - 1] = '\0';
    printf("Enter Today's Date:\n");
    fgets(userCart.currentDate, 50, stdin);
    userCart.currentDate[strlen(userCart.currentDate) - 1] = '\0';

    printf("\nCustomer Name: %s\n", userCart.customerName);
    printf("Today's Date: %s\n", userCart.currentDate);

    userCart = PrintMenu(userCart);

    return 0;
}
