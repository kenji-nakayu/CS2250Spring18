/*
 * =====================================================================================
 *
 *       Filename:  xycoord.h
 *
 *    Description:  Header file for the functions used in
 *                  x y coordinate program
 *
 *        Version:  1.0
 *        Created:  03/15/2018 08:50:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef _XY_COORD_H_
#define _XY_COORD_H_

// Constants
static const int X = 0;
static const int Y = 1;
static const int DIM = 2;
// Function Prototypes
// 1) Initialize your Point to (0, 0)
void InitPoint(int* xa, int* ya); // pass by reference
// 2) Display current Point position
void ShowPoint(int x, int y); // pass by value
// 3) Move/Update your Point position
//  pass newx and newy by value
//  pass xa and ya by reference
void MovePoint(int newx, int newy, int* xa, int* ya); 
// Update Point. You ask user to enter new values
void UpdatePoint(int* xa, int* ya); // pass by reference

#endif
