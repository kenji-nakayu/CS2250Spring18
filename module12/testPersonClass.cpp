/*
 * =====================================================================================
 *
 *       Filename:  testPersonClass.cpp
 *
 *    Description:  Basic test unit for Person Class
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:43:13 AM
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
#include "PersonClass.h"

// Main Function
int main()
{
    Person guy1;
    cout << "Age is " << guy1.GetAge() << endl;
    cout << "Name is " << guy1.GetName() << endl;
    cout << "Weight is " << guy1.GetWeight() << endl;
    cout << endl;

    guy1.SetAge(21);
    guy1.SetName("Waldo Weber");
    guy1.SetWeight(189.7);

    cout << "Age is " << guy1.GetAge() << endl;
    cout << "Name is " << guy1.GetName() << endl;
    cout << "Weight is " << guy1.GetWeight() << endl;

    Person guy2(-19, "This Name", -75.7);
    cout << endl << "Second person called with secondary constructor" << endl;
    cout << "with values passed in as -19, \"This Name\", and -75.7" << endl;
    guy2.ShowInfo();

    cout << endl << "Creating an array of people" << endl;
    cout << endl;
    const int SIZE = 4;
    Person people[SIZE];
    for(int i = 0; i < SIZE; ++i)
    {
        people[i].SetAge((i + 1) * 7);
        string temp = "Thing ";
        temp = temp + (char)('1' + i);
        people[i].SetName(temp);
        people[i].SetWeight((double)(i + 1) * 75.2);
        cout << "Person " << i + 1 << endl;
        people[i].ShowInfo();
        cout << endl;
    }

    cout << "Creating an array of people + people" << endl;
    Person franks[SIZE / 2];
    for(int i = 0; i < SIZE / 2 + 1; i += 2)
    {
        franks[i/2] = people[i] + people[i+1];
        cout << "Frankenperson " << (i / 2) + 1 << endl;
        franks[i/2].ShowInfo();
        cout << endl;
    }

    return 0;
}


