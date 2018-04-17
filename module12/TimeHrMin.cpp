/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMin.cpp
 *
 *    Description:  Class member function definitions
 *
 *        Version:  1.0
 *        Created:  04/12/2018 10:02:23 AM
 *       Revision:  none
 *       Compiler:  g++ for C++, gcc for C
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //For C
#include <iostream> //For C++
using namespace std; //For C++
#include "TimeHrMin.h"

// Function Definitions

//Default constructor
TimeHrMin::TimeHrMin()
{    hours = 12; minutes = 0;}
//Secondary constructor
TimeHrMin::TimeHrMin(int hr, int min)
{    hours = hr; minutes = min;}

//Getter Show function
//TODO: Finish function definitions
void TimeHrMin::ShowTime()
{
    return;
}

//Operator +
TimeHrMin TimeHrMin::operator+(TimeHrMin rhs)
{
    TimeHrMin temp;

    return temp;
}

