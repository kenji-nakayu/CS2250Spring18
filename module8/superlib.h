/*
 * =====================================================================================
 *
 *       Filename:  superlib.h
 *
 *    Description:  It is super duper functions for strings
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef __SUPERLIB_H__
#define __SUPERLIB_H__
// Constants
//Inside header files, add the keyword static
//before the variable definition
static const int INPUT_STR_SIZE = 50; //Input string size

// Function Prototypes
void StrSpaceToChar(char modString[], char sep);

//Task1: Make a function to count digits in the user string
int StrCountDigits(char userString[]);

void RemoveNewLine(char userString[]);

#endif
