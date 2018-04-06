/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2018 05:21:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kenji Nakayu (), kenjinakayu@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS_INC__


// Constants
typedef struct ContactNode_st{
    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode_st* nextNodePtr;
} ContactNode;

// Function Prototypes
void CreateContactNode(ContactNode* node, char name[], char num[], ContactNode* ptr);
void InsertContactAfter(ContactNode* firstNode, ContactNode* secondNode);
ContactNode* GetNextContact(ContactNode* currNode);
void PrintContactNode(ContactNode currNode);

#endif /* ----- #ifndef CONTACTS__INC__ ----- */

