/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.h
 *
 *    Description:  Person Class information
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:42:02 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PERSONCLASS__INC__
#define  PERSONCLASS_INC__

class Person
{
    private:
        int age;
        string name;
        double weight;
    public:
        Person(); //Default constructor
        //TODO: Add functionality to allow passing in only one or two parameters
        //Person(int a = 0, string n = "None", double w = 0.0);
        Person(int a, string n, double w); //Secondary constructor

        void SetAge(int a);
        int GetAge();

        void SetName(string n);
        string GetName();

        void SetWeight(double w);
        double GetWeight();

        void ShowInfo() const;
        Person operator+(Person rhs);
};

#endif /* ----- #ifndef PERSONCLASS__INC__ ----- */

