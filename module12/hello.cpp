/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  Hello world in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:42:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //For C
#include <iostream>  //For C++
using namespace std;  //Allows you to use std functions without the format
// std::cout

// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name;
    //std::cout << "Hello World C++" << std::endl;
    cout << "Hello World C++" << endl;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "You are " << age << " old" << endl;
    cout << "What is your name?" << endl;
    //cin >> name; //Take input up to the first space
    //Using cin.ignore() takes care of the enter key from previous
    //cin calls
    cin.ignore();
    getline( cin, name); //Takes the whole line of input including spaces
    cout << "Hello " << name << endl;

    return 0;
}
// Function Definitions


