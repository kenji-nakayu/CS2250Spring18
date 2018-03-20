/*
 * =====================================================================================
 *
 *       Filename:  Dude.h
 *
 *    Description:  Header file for Dude types and functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:19:10 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__

// Constants
struct Dude
{
    int age;
    double weight;
}; // Do not forget the semicolon to end structure declaration


typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude; // Do not forget the semicolon to end structure declaration

// Function Prototypes
void ShowInfo(int age, double weight);
void ShowInfoStruct(SuperDude sd);

#endif /* ----- #ifndef DUDE__INC__ ----- */
