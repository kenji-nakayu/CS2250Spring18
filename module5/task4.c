/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  Print the first 20 even numbers
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:11:16 AM
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
const int STARTING_NUM = 1;
const int TOTAL_NUMS = 20;

// Similar to the newline character '\n', 
// there is a tab character '\t'
//
// Recall, sitting on a curly bracket in command line
// and entering "=%" will auto-align the block.

// Main Function
int main()
{
    int num = STARTING_NUM;
    int numNums = 0;
    while(1)
    {

        //print even numbers
        if( (num % 2) == 0)
        {
            printf("[%d]\n", num);
            num += 1;
            numNums += 1;
        }
        //skip odd numbers
        else
        {
            //printf("\tSkip odd number [%d]\n", num);
            //used for testing to make sure that odd numbers behave differently than even numbers
            num += 1;
            continue;
        }

        //when 20 even numbers, break loop
        if(numNums >= TOTAL_NUMS)
        {
            break;
        }
    } //Adding a comment to indicate this curly closes the while loop may improve readability

    return 0;
}
// Function Definitions


