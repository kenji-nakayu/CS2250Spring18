/*
 * =====================================================================================
 *
 *       Filename:  Seat.h
 *
 *    Description:  Seat Library
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:30:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SEAT__INC__
#define  SEAT_INC__

// Constants
static const int NUM_SEATS = 5;
typedef struct Seat_struct {
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;
// Function Prototypes

#include <stdbool.h>
void SeatMakeEmpty(Seat* seat);
bool SeatIsEmpty(Seat seat);
void SeatPrint(Seat seat);
void SeatsMakeEmpty(Seat seats[], int numSeats);
void SeatsPrint(Seat seats[], int numSeats);

#endif /* ----- #ifndef SEAT__INC__ ----- */

