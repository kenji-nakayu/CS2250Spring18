/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Main function for warmup
 *
 *        Version:  1.0
 *        Created:  04/05/2018 05:21:07 PM
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
#include <string.h>
#include "Contacts.h"

// Main Function
int main()
{
    ContactNode* currNode;
    ContactNode temp;
    ContactNode* person1;
    ContactNode* person2;
    ContactNode* person3;

    person1 = (ContactNode*)malloc(sizeof(ContactNode));
    person2 = (ContactNode*)malloc(sizeof(ContactNode));
    person3 = (ContactNode*)malloc(sizeof(ContactNode));

    for(int i = 0; i < 25; ++i)
    {
        temp.contactName[i] = '\0';
    }

    printf("Person 1\n");
    printf("Enter name:\n");
    fgets(temp.contactName, 50, stdin);
    //temp.contactName[strlen(temp.contactName) - 1] = '\0';
    //Doing this broke the program for some reason
    for(int i = 0; i < 50; ++i)
    {
        if(temp.contactName[i] == '\n')
        {
            temp.contactName[i] = '\0';
            break;
        }
    }
    printf("Enter phone number:\n");
    fgets(temp.contactPhoneNum, 50, stdin);
    for(int i = 0; i < 50; ++i)
    {
        if(temp.contactPhoneNum[i] == '\n')
        {
            temp.contactPhoneNum[i] = '\0';
            break;
        }
    }
    printf("You entered: %s, %s\n", temp.contactName, temp.contactPhoneNum);
    temp.nextNodePtr = NULL;
    CreateContactNode(person1, temp.contactName, temp.contactPhoneNum, NULL);


    for(int i = 0; i < 25; ++i)
    {
        temp.contactName[i] = '\0';
    }

    printf("\n");
    printf("Person 2\n");
    printf("Enter name:\n");
    fgets(temp.contactName, 50, stdin);
    for(int i = 0; i < 50; ++i)
    {
        if(temp.contactName[i] == '\n')
        {
            temp.contactName[i] = '\0';
            break;
        }
    }
    printf("Enter phone number:\n");
    fgets(temp.contactPhoneNum, 50, stdin);
    for(int i = 0; i < 50; ++i)
    {
        if(temp.contactPhoneNum[i] == '\n')
        {
            temp.contactPhoneNum[i] = '\0';
            break;
        }
    }
    printf("You entered: %s, %s\n", temp.contactName, temp.contactPhoneNum);
    temp.nextNodePtr = NULL;
    CreateContactNode(person2, temp.contactName, temp.contactPhoneNum, NULL);


    for(int i = 0; i < 25; ++i)
    {
        temp.contactName[i] = '\0';
    }

    printf("\n");
    printf("Person 3\n");
    printf("Enter name:\n");
    fgets(temp.contactName, 50, stdin);
    for(int i = 0; i < 50; ++i)
    {
        if(temp.contactName[i] == '\n')
        {
            temp.contactName[i] = '\0';
            break;
        }
    }
    printf("Enter phone number:\n");
    fgets(temp.contactPhoneNum, 50, stdin);
    for(int i = 0; i < 50; ++i)
    {
        if(temp.contactPhoneNum[i] == '\n')
        {
            temp.contactPhoneNum[i] = '\0';
            break;
        }
    }
    printf("You entered: %s, %s\n", temp.contactName, temp.contactPhoneNum);
    temp.nextNodePtr = NULL;
    CreateContactNode(person3, temp.contactName, temp.contactPhoneNum, NULL);
    printf("\n");

    InsertContactAfter(person1, person2);
    InsertContactAfter(person2, person3);

    printf("CONTACT LIST\n");
    currNode = person1;
    int i = 0;
    while(currNode != NULL)
    {
        PrintContactNode(*currNode);
        printf("\n");
        
        currNode = currNode->nextNodePtr;

        ++i;

        if(i > 10)
        {
            printf("Error with printing things.\n");
            break;}
    }

    free(person1);
    free(person2);
    free(person3);

    return 0;
}
