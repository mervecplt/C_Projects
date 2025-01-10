#include <stdio.h>
#include <stdlib.h>



struct Contact
{
    char firstName[30];
    char lastName[30];
    char phoneNumber[11];
    char emailAddress[50];

};

int addContact (struct Contact [], int);
void displayContacts(struct Contact [], int);

int main()
{
   struct Contact addressBook[100];
   int contactCount=0;
   int choice;


   do
   {
       printf("\n Address Book Menu:\n");
       printf("1. Add Contact\n");
       printf("2. Display Contact\n");
       printf("3. Exit\n");
       printf("Enter your choice");
       scanf("%d", &choice);

       switch(choice)
       {
      case 1:
        contactCount=addContact(addressBook,contactCount)==1?
        contactCount+1:contactCount;
        break;
      case 2:
        displayContacts(addressBook, contactCount);
        break;
      case 3:
        printf("Exiting the program\n");
        break;
      default:
        printf("Invalid choice.");

       }

   }while(choice!=3);
    return 0;
}

int addContact (struct Contact addressBook[], int contactCount)
{
    if(contactCount<100)
    {
        struct Contact newContact;

        printf("Enter first Name:");
        scanf("%s",newContact.firstName);
        printf("Enter last Name:");
        scanf("%s",newContact.lastName);
        printf("Enter Phone Number");
        scanf("%s",newContact.phoneNumber);
        printf("Enter e-mail Address:");
        scanf("%s",newContact.emailAddress);

        addressBook[contactCount]=newContact;
        printf("Contact added successfully");
        return 1;
    }
    else
    {
        printf("address Book is full");
        return 0;
    }
}

void displayContacts (struct Contact addressBook[], int contactCount)
{
    if(contactCount>0)
    {
    printf("Contact in the Address Book\n");
    printf("%-15s %-15s %-15s %-30s\n","FirstName","LastName","PhoneNumber","EmailAddress");
    for(int i=0; i<contactCount; i++)
    {
        printf("%-15s %-15s %-15s %-30s",
               addressBook[i].firstName,
               addressBook[i].lastName,
               addressBook[i].phoneNumber,
               addressBook[i].emailAddress);
    }

    }
    else
       {
        printf("Address Book is empty.");
       }
}






