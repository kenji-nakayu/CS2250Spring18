/*
 * =====================================================================================
 *
 *       Filename:  BMI.c
 *
 *    Description:  Calculate the BMI
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:31:02 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    double weight, height, bmi;

    // 1) Capture the weight in kg
    printf("Enter your weight in kg:\n");
    scanf("%lf", &weight);

    // 2) Capture the height in meters
    printf("Enter your height in m:\n");
    scanf("%lf", &height);

    // 3) Calculate the BMI = weight / (height **2)
    bmi = weight / pow(height, 2);

    // 4) Display BMI
    printf("Your BMI is %lf\n", bmi);

    return 0;
}
// Function Definitions


