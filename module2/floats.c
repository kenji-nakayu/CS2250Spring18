/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description:  Learning about floating point
 *
 *        Version:  1.0
 *        Created:  01/18/2018 08:53:14 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
    const float gravity = 9.8; // m/(s^2)
    const double LB_TO_KG = 0.453592; //1 lb = 0.453592 kg
// Function Prototypes

// Main Function
int main()
{
    double weight = 2.4;

    printf("My w is %lf\n", weight);
    printf("Please enter your weight in pounds:\n");
    scanf("%lf", &weight);
    printf("Your weight in lb is %lf\n", weight);
    printf("Your mass in kg is %lf\n", weight * LB_TO_KG);
    printf("Your weight in Newtons is %lf\n", weight * LB_TO_KG * gravity);
    // gravity = 2.0; //You cannot change a constant value.

    return 0;
}
// Function Definitions


