/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.cpp
 *
 *    Description:  Make a person class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:48:36 AM
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

// Function Definitions
void Person::SetAge(int a)
{    age = a; }
int Person::GetAge()
{    return age; }
void Person::SetName(string n)
{    name = n; }
string Person::GetName()
{    return name; }
void Person::SetWeight(double w)
{    weight = w; }
double Person::GetWeight()
{    return weight; }
void Person::ShowInfo() const
{
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Weight " << this->weight << endl;

    return;
}
Person::Person()
{    age = 0; name = "No name"; weight = 0.0; }
Person::Person(int a, string n, double w)
{    age = a; name = n; weight = w; }
Person Person::operator+(Person rhs)
{
    Person temp;

    temp.age = this->age + rhs.age;
    temp.weight = this->weight + rhs.weight;
    temp.name = this->name + ' ' + rhs.name;

    return temp;
}

