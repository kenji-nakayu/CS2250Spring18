/*
 * =====================================================================================
 *
 *       Filename:  myMalloc.c
 *
 *    Description:  Dynamically allocated memory
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:41:20 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int num;
    int* sa = NULL;
    printf("How many numbers do you need?\n");
    scanf("%d", &num);

    //Malloc takes number of bytes
    //malloc(<#bytes>)
    //type pointer = (type*)malloc(num * sizeof(type));

    // %lu is for long unsigned
    printf("int is [%lu] bytes\n", sizeof(int));
    printf("int array of [%d] is [%lu] bytes\n",
            num, num * sizeof(int));
    sa = (int*)malloc(num * sizeof(int));
    for(int i = 0; i < num; ++i)
    {
        sa[i] = i + 1;
        printf("[%d] ", sa[i]);
        if(((i + 1) % 10) == 0)
        {
            printf("\n");
        }
    }

    free(sa);
    printf("\n\n");

    return 0;
}
// Function Definitions


