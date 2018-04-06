/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2018 05:21:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "Contacts.h"

// Function Definitions
void CreateContactNode(ContactNode* node, char name[], char num[], ContactNode* ptr)
{

    strcpy(node->contactName, name);
    strcpy(node->contactPhoneNum, num);
    node->nextNodePtr = ptr;

    return;
}
void InsertContactAfter(ContactNode* firstNode, ContactNode* secondNode)
{
    firstNode->nextNodePtr = secondNode;

    return;
}
ContactNode* GetNextContact(ContactNode* currNode)
{
    return currNode->nextNodePtr;
}
void PrintContactNode(ContactNode currNode)
{
    printf("Name: %s\n", currNode.contactName);
    printf("Phone number: %s\n", currNode.contactPhoneNum);

    return;
}
