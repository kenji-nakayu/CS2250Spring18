/*
 * =====================================================================================
 *
 *       Filename:  enum.c
 *
 *    Description:  Practice the usage of enumerations
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:43:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
//The code in this program is copied from the textbook as an example

// Constants

// Function Prototypes

// Main Function
/* Manual controller for traffic light */
int main()
    {
        enum LightState {LS_RED, LS_GREEN, LS_YELLOW, LS_DONE};
        enum LightState lightVal;
        char userCmd;

        lightVal = LS_RED;
        userCmd = '-';

        printf("User commands: n (next), r (red), q (quit).\n\n");

        lightVal = LS_RED;
        while (lightVal != LS_DONE) {

            if (lightVal == LS_GREEN) {
                printf("Green light  ");
                scanf(" %c", &userCmd);
                if (userCmd == 'n') { // Next
                    lightVal = LS_YELLOW;
                }
            }
            else if (lightVal == LS_YELLOW) {
                printf("Yellow light  ");
                scanf(" %c", &userCmd);
                if (userCmd == 'n') { // Next
                    lightVal = LS_RED;
                }
            }
            else if (lightVal == LS_RED) {
                printf("Red light  ");
                scanf(" %c", &userCmd);
                if (userCmd == 'n') { // Next
                    lightVal = LS_GREEN;
                }
            }

            if (userCmd == 'r') { // Force immediate red
                lightVal = LS_RED;
            }
            else if (userCmd == 'q') { // Quit
                lightVal = LS_DONE;
            }
        }

        printf("Quit program.\n");


        return 0;
    }
// Function Definitions


