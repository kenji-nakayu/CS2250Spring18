/*
 * =====================================================================================
 *
 *       Filename:  helloClass.cpp
 *
 *    Description:  Make a Hello World class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:51 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //For C
#include <iostream> //For C++
using namespace std; //For C++

// Constants
class HelloNum
{
    private: //Only the developer can see this section
        int number; //Attribute

    public: //Interface for the user to access by writing functions or Methods
        void ShowNumber(); //Prototype
        void SetNumber(int n); //Setter
        int GetNumber(); //Getter
        HelloNum(); //Default Constructor
        HelloNum(int value); //Alternate constructor with int parameter

        HelloNum operator+(HelloNum rhs); //Overloaded operator


};

// Function Prototypes

// Main Function
int main()
{

    HelloNum num1;
    HelloNum num2(10);
    HelloNum sum;

    num1.ShowNumber();
    cout << "num1 is default constructed to " << num1.GetNumber() << endl;
    cout << "Setting num1 to 7" << endl;
    num1.SetNumber(7);
    num1.ShowNumber();
    cout << "Showing num2"<<endl;
    num2.ShowNumber();
    cout << "num2 was alternately constructed to " << num2.GetNumber() << endl;
    sum = num1 + num2; //equivalent to sum = num1.operator+(num2);
    cout << "Calculating num1 + num2" << endl;
    sum.ShowNumber();
    cout<<"The + operator is overloaded to work with the HelloNum class"<<endl;

    return 0;
}
// Function Definitions

void HelloNum::ShowNumber()
{
    cout << "Your num is " << number << endl;
    return;
}

void HelloNum::SetNumber(int n)
{
    number = n;
    return;
}

int HelloNum::GetNumber()
{
    return number;
}

HelloNum HelloNum::operator+ (HelloNum rhs)
{
    HelloNum sum;
    sum.number = this->number + rhs.number;

    return sum;
}

HelloNum::HelloNum()
{
    number = -99;
}
HelloNum::HelloNum(int value)
{
    number = value;
}
