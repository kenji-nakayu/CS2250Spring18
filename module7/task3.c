/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Update map positions:
 *                  X-Coordinate
 *                  Y-Coordinate
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:17:23 AM
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
const char VAR[] = "XYZW"; //Constant string for common variables
const int DIM = 5; // Number of dimensions
// Function Prototypes
// 1) initialize your point to (0, 0)
void Origin(int point[]);
// 2) Display current point position
void DisplayPoint(int point[]);
// 3) Move/Update your Point position
void UpdatePoint(int point[]);
// Main Function
int main()
{
    int input[DIM];

    for(int i = 0; i < DIM; ++i)
    {
        input[i] = -99;
    }

    DisplayPoint(input);

    Origin(input);

    DisplayPoint(input);

    UpdatePoint(input);

    DisplayPoint(input);

    return 0;
}
// Function Definitions

//Function Origin initializes the point to the origin
void Origin(int point[])
{
    for(int i = 0; i < DIM; ++i)
    {
        point[i] = 0;
    }

    return;
}

//Function DisplayPoint prints the current coordinates of the point
void DisplayPoint(int point[])
{
    printf("Current point is (");
    for(int i = 0; i < DIM; ++i)
    {
        printf("%d", point[i]);
        if(i < DIM - 1)
        {
            printf(", ");
        }
    }
    printf(")\n");

    return;
}

//Function Update point takes user input to update the current point
void UpdatePoint(int point[])
{
    if(DIM < 5)
    {
        for(int i = 0; i < DIM; ++i)
        {
            printf("Enter new %c-Coordinate:\n", VAR[i]);
            scanf("%d", &point[i]);
        }
    }

    else
    {
        for(int i = 0; i < DIM; ++i)
        {
            printf("Enter new X%d-Coordinate:\n", i - 1);
            scanf("%d", &point[i]);
        }
    }
    return;
}
