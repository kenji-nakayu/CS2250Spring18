/*
 * =====================================================================================
 *
 *       Filename:  mallocRand.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:50:03 AM
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
#include <time.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    char c = '\0';
    int num = 0;
    const int mbInt = 1024 * 1024 / (int)sizeof(int);
    int* array = NULL;
    srand((int)time(0));

    do
    {
        printf("How many random integers?\n");
        scanf("%d", &num);
        if(num < 0)
        {
            printf("Converting to positive.\n");
            num *= -1;
        }
        if(num > mbInt)
        {
            printf("Size is too large. Converting number to modulus %d\n",
                    mbInt);
            num %= mbInt;
        }
        if(num == 0)
        {
            printf("Number is currently zero. Adding one.\n");
            ++num;
        }

        printf("Creating array of size [%d]\n", num);
        array = (int*)malloc(num * sizeof(int));

        printf("Initializing array with random numbers.\n");
        for(int i = 0; i < num; ++i)
        {
            array[i] = rand() % 1000;
        }

        printf("Printing array\n\n");
        for(int i = 0; i < num; ++i)
        {
            printf("[%3d] ", array[i]);
            if((i % 10) == 9)
            {printf("\n");}
        }
        printf("\n\n");
        printf("Sorting array into ascending order.\n");
        for(int i = 0; i < num; ++i)
        {
            for(int j = i + 1; j < num; ++j)
            {
                if(array[j] < array[i])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        printf("Printing sorted array\n\n");
        for(int i = 0; i < num; ++i)
        {
            printf("[%3d] ", array[i]);
            if((i % 10) == 9)
            {printf("\n");}
        }
        printf("\n\n");

        printf("Freeing allocated memory for array.\n");
        free(array);
        printf("Continue? ('q' to quit, any other character to continue.\n");
        scanf(" %c", &c);
    } while(c != 'q');

    printf("Program finished.\n\n");

    return 0;
}
// Function Definitions


