/*
 * =====================================================================================
 *
 *       Filename:  task3pbp.c
 *
 *    Description:  Task 3 with pass by pointer variables rather than an array
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:36:39 AM
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

// Function Prototypes
// initialize the point
void Origin(int* xa, int* ya); //Pass by reference or pass by pointer
//Display the current position 
void DisplayPoint(int x, int y); //Pass by value
//Update the values
void UpdatePoint(int* xb, int* yb);
// Main Function
int main()
{
    int x = -99;
    int y = -99;

    DisplayPoint(x, y);
    Origin(&x, &y);
    DisplayPoint(x, y);

    UpdatePoint(&x, &y);
    return 0;
}
// Function Definitions
//Function Origin initializes the point to the origin
void Origin(int* xa, int* ya)
{
    printf("Begin function Origin.\n");

    DisplayPoint(*xa, *ya);

    //To update the values at a given address
    //use the de-reference operator "*"
    *xa = 0;
    *ya = 0;

    DisplayPoint(*xa, *ya);

    printf("End of function Origin.\n");

    return;
}
//Function DisplayPoint displays the current position
void DisplayPoint(int x, int y)
{
    printf("X-coordinate is [%d]\n", x);
    printf("Y-coordinate is [%d]\n", y);

    return;
}
//Function UpdatePoint prompts the user to update the point
void UpdatePoint(int* xb, int* yb)
{
    printf("Current point location is:\n");
    DisplayPoint(*xb, *yb);

    printf("Enter new X-coordinate:\n");
    scanf("%d", xb);
    //Do not use the address operator "&"
    //because the pointer or reference is already an address
    printf("Enter new Y-coordinate:\n");
    scanf("%d", yb);

    printf("New Point location is:\n");
    DisplayPoint(*xb, *yb);
}

/* We could use an update function with value and reference parameters
 * void Update(int newx, int newy, int* xadd, int* yadd)
 * {
 *      *xadd = newx;
 *      *yadd = newy;
 *      return;
 * }
 * Using this type of function requires the new values to be entered
 * into the function call. */
