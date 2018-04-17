/*
 * =====================================================================================
 *
 *       Filename:  firstVector.cpp
 *
 *    Description:  Examples of using vectors
 *
 *        Version:  1.0
 *        Created:  04/17/2018 08:36:24 AM
 *       Revision:  none
 *       Compiler:  g++ for C++, gcc for C
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream> //For C++
#include <vector>   //For Vectors
using namespace std; //For C++

// Constants

// Function Prototypes

// Main Function
int main()
{
    vector <int> g1;
    vector <int> :: iterator j; //an iterator for looping over the vector

    // Add elements
    for(int i = 1; i < 5; ++i)
    {
        g1.push_back(i * 11); // Add element to the end of vector
    }

    cout << "Output elements of array\n";
    //Use the iterator to loop over elements
    for(j = g1.begin(); j != g1.end(); ++j)
    {
        //dereference the iterator to get the value
        cout << *j << '\t';
    }
    cout << endl;
    //To add and iterate:
    //push_back() : Add element at end of vector
    //begin(): takes first element of vector
    //end(): Takes last element of vector
    //Capacity:
    //size() : returns the size of the vector
    //max_size() : returns the maximum number of elements that the vector can hold
    //capacity() : returns the size of storage (bytes)
    //empty() : Returns whether the container is empty

    cout << "Size: " << g1.size() << endl;
    cout << "Capacity: " << g1.capacity() << endl;
    cout << "Max_size: " << g1.max_size() << endl;

    //Accessing the elements: 
    // 1) reference operator [g]: returns a reference to the element at position 'g'
    // 2) at(g): Returns a reference to the element at position 'g'
    // 3) front() : Returns a reference to the first element
    // 4) back() : Returns a reference to the last element

    cout << "Reference Operator [g]: g1[2] = " << g1[2] << endl;
    cout << "at : g1.at(1) = " << g1.at(1) << endl;
    cout << "front() : g1.front() = " << g1.front() << endl;
    cout << "back() : g1.back() = " << g1.back() << endl;



    return 0;
}
// Function Definitions


