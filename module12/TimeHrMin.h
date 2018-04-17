/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMin.h
 *
 *    Description:  Define class Time
 *
 *        Version:  1.0
 *        Created:  04/12/2018 10:02:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  TIMEHRMIN__INC__
#define  TIMEHRMIN_INC__

class TimeHrMin
{
    private:
        int hours;
        int minutes;
        //TODO: Add functionality for AM/PM
    public:
        //Default constructor
        TimeHrMin();
        //Secondary constructor
        TimeHrMin(int hr, int min);

        //Getter Show function
        void ShowTime();
        //TODO: Add separate setter function

        //Operator +
        TimeHrMin operator+(TimeHrMin rhs);

};

#endif /* ----- #ifndef TIMEHRMIN__INC__ ----- */

