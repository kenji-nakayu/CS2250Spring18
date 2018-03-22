/*
 * =====================================================================================
 *
 *       Filename:  testSeat.c
 *
 *    Description:  Test Seat library
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:30:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Seat.h"

// Main Function
int main(void) {
    char userKey = '-';
    int  seatNum = 0;
    Seat allSeats[NUM_SEATS];
    Seat currSeat;

    SeatsMakeEmpty(allSeats, NUM_SEATS);

    while (userKey != 'q') {
        printf("Enter command (p/r/q): ");
        scanf(" %c", &userKey);

        if (userKey == 'p') { // Print seats
            SeatsPrint(allSeats, NUM_SEATS);
            printf("\n");
        }
        else if (userKey == 'r') { // Reserve seat
            printf("Enter seat num: ");
            scanf("%d", &seatNum);

            if (!SeatIsEmpty(allSeats[seatNum])) {
                printf("Seat not empty.\n\n");
            }
            else {
                printf("Enter first name: ");
                scanf("%s", currSeat.firstName);
                printf("Enter last name: ");
                scanf("%s", currSeat.lastName);
                printf("Enter amount paid: ");
                scanf("%d", &currSeat.amountPaid);

                allSeats[seatNum] = currSeat;

                printf("Completed.\n\n");
            }
        }
        // FIXME: Add option to delete reservations
        else if (userKey == 'q') { // Quit
            printf("Quitting.\n");
        }
        else {
            printf("Invalid command.\n\n");
        }
    }

    return 0;
}
