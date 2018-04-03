/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  Use input file
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:18:30 AM
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
// #define NUM 4
//const int NUM = 4;

// Function Prototypes

// Main Function
int main()
{
    int NUM;
    int* data;
    FILE* inFile = NULL;
    printf("Opening file data.txt\n");

    //Open file for Reading purposes
    inFile = fopen("data.txt", "r");

    if(inFile == NULL)
    {
        printf("Unable to open file.");
        return -1;
    }

    //First integer indicates the number of inputs
    fscanf(inFile, "%d", &NUM);

    printf("Creating array of size [%d]\n", NUM);
    //Dynamically allocate array
    data = (int*)malloc(NUM * sizeof(int));

    if(data == NULL)
    {
        printf("Unable to allocate memory\n");
        fclose(inFile);
        return -2;
    }

    data[NUM - 1] = 0;

    //Assume that the file has enough integers for input
    printf("Reading data from file\n");
    for(int i = 0; i < NUM; ++i)
    {
        if(feof(inFile))
        {
            printf("Not enough data points in file\n");
            fclose(inFile);
            free(data);
            return -3;
        }
        fscanf(inFile, "%d", &data[i]);
    }

    //Done with file, close file
    fclose(inFile);

    printf("Printing array:");
    for(int i = 0; i < NUM; ++i)
    {
        if((i % 10) == 0)
        {printf("\n");}
        printf("[%3d] ", data[i]);
    }

    printf("\n");
    //Done with array, free the memory
    free(data);

    return 0;
}
// Function Definitions


