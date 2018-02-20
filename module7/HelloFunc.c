/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description:  Learn about how to use basic functions
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:44:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello(void);
void HelloMany(int num);
int HelloNum(void);
int HelloNumMany(int num);
int MySquare(int num);

// Main Function
int main(void)
{

    Hello();

    HelloMany(HelloNum());

    int n = HelloNumMany(HelloNum());
    printf("HelloNumMany() returned %d.\n", n);

    printf("Enter a number to be squared:\n");
    scanf("%d", &n);
    printf("%d squared is %d.\n", n, MySquare(n));

    return 0;
}
// Function Definitions

//Function Hello prints the message one time
void Hello(void)
{
    printf("Hello World!\n");
    return; //Optional for a void type function.
}


//Function: HelloMany
//prints message num times
void HelloMany(int num)
{
    for(int i = 1; i <= num; ++i)
    {
        printf("Hello again!\n");
    }

    return;
}

//Function HelloNum returns a user entered number
int HelloNum(void)
{
    int userNum;

    do
    {
        printf("Please enter a positive integer from 0 - 25.\n");
        scanf("%d", &userNum);
    } while((userNum < 0) || (userNum > 25));

    return userNum;
}

//Function: HelloNumMany
//Takes an integer
//Returns the number of Hello Print Statements
int HelloNumMany(int num)
{
    int count = 0;
    for(int i = 0; i < num; ++i)
    {
        printf("%d) Hello NumMany\n", i + 1);
        count++;
    }

    return count;
}

//Function MySquare returns the square of the entered number
//Func: MySqaure
//Param: num -> Number to be squared
//Ret: num squared
int MySquare(int num)
{
    return num * num;
}
