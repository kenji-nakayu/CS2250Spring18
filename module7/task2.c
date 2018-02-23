/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Small group task
 *
 *        Version:  1.0
 *        Created:  02/22/2018 08:38:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
//In the command line, you can sit on a word
//and use * to highlight all occurrences of that word
//Using n on the command line will move to the next occurrence.
//Useful for searching to make sure variables are consistent.
//Use CTRL + N to deselect the search.
//
//Also, using . in command line inserts a newline at the cursor point

// Constants
const int M_PER_KM = 1000;
const int SEC_PER_HOUR = 3600;

// Function Prototypes
double Velocity(double distance, double intime);
double Kmtom(double kilom);
double Hrtos(double hours);
// Main Function
int main()
{

    double dist, userTime;

    printf("Enter the distance in kilometers:\n");
    scanf("%lf", &dist);

    printf("Enter the time in hours:\n");
    scanf("%lf", &userTime);

    printf("Velocity is %lf km/hr.\n", Velocity(dist, userTime));

    printf("Velocity is %lf m/s.\n", 
            Velocity(Kmtom(dist), Hrtos(userTime)));

    return 0;
}
// Function Definitions
// Function Velocity outputs velocity for inputs of distance and time
double Velocity(double distance, double intime)
{
    return distance / intime;
}

//Function Kmtom converts kilometers to meters
double Kmtom(double kilom)
{
    return kilom * M_PER_KM;
}

//Function Hrtos converts hours to seconds
double Hrtos(double hours)
{
    return hours * SEC_PER_HOUR;
}
