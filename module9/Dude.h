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
// #define ASIZE 3
static const int NUM_PEOPLE = 5;
//
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
void ShowInfoStruct(const SuperDude* sd); //Setting constant address
//Prevents the value from being updated but makes it where
//you do not need to make a local temporary copy
void InitRandDude(SuperDude* sd); //Address of type SuperDude
void InitRandAll(SuperDude sdarr[]);
SuperDude CopyInfoStruct(const SuperDude* sd);
void UpdateInfoStruct(SuperDude* sd, int myWeight);
void ShowInfoAll(const SuperDude sdarr[]);

#endif /* ----- #ifndef DUDE__INC__ ----- */
