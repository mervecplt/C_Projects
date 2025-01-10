#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Guest {
    char *name;
    char rsvp;
    char *dietaryRestrictions;
};


void getGuestCount(int *);
void getGuestNames(struct Guest *, int) ;
void getRSVPs(struct Guest *, int);
int findGuestByName(struct Guest *, char *, int);
void getDietaryRestrictions(struct Guest *, int);
void generateInvitations(struct Guest *, int);
void print(struct Guest *, int);
int menu();


int main(void){
    int numGuests;
    getGuestCount(&numGuests);

    struct Guest *guests = (struct Guest *)malloc(numGuests * sizeof(struct Guest));
    getGuestNames(guests, numGuests);
    int choice;
    while((choice = menu()) != 0) {
        switch(choice){
            case 1:
                getRSVPs(guests, numGuests);
                break;
            case 2:
                getDietaryRestrictions(guests, numGuests);
                break;
            case 3:
                generateInvitations(guests, numGuests);
                break;
            case 4:
                print(guests, numGuests);
                break;
            default:
                printf("wrong!!!");
                break;
        }
    }

    for (int i = 0; i < numGuests; i++) {
       free(guests[i].name);
       free(guests[i].dietaryRestrictions);
    }
	free(guests);
}
int menu(){
    int choice;
    printf("pick a menu item:\n");
    printf("0. Exit\n");
    printf("1. Enter RSVPS\n");
    printf("2. Enter Dieatary Restriction.\n");
    printf("3. Generate Invitations\n");
    printf("4. Print\n");
    scanf("%d", &choice);
    return choice;
}


void getGuestCount(int *numGuests) {
    printf("\nHow many guests are you inviting to the party? ");
    scanf("%d", numGuests);
}


int findGuestByName(struct Guest *guests, char *name, int numGuests) {
    for (int i = 0; i < numGuests; i++) {
        if (strcmp(guests[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void getGuestNames(struct Guest *guests, int numGuests) {
    char tempName[50];
    for (int i = 0; i < numGuests; i++) {
        printf("Enter name for guest %d: ", i + 1);
        scanf("%s", tempName);


        guests[i].name = (char *)malloc((strlen(tempName) + 1) * sizeof(char));
        strcpy(guests[i].name, tempName);

        guests[i].rsvp = 'N';


        guests[i].dietaryRestrictions = (char *)malloc(5 * sizeof(char));
        strcpy(guests[i].dietaryRestrictions, "None");
    }
}

void getRSVPs(struct Guest *guests, int numGuests) {
    char name[50];
    char response;
    int index;

    printf("Enter the name of the guest for RSVP: ");
    scanf("%s", name);

    index = findGuestByName(guests, name, numGuests);

    if (index != -1) {
        printf("Enter RSVP for %s (Y/N): ", name);
        scanf(" %c", &response);
        guests[index].rsvp = response;
    } else {
        printf("Guest not found.\n");
    }
}


void getDietaryRestrictions(struct Guest *guests, int numGuests) {
     char name[50];
     int i;
     printf("Name of the guest: ");
     scanf("%s%*c", name);
     i = findGuestByName(guests, name, numGuests);
    if(i != -1){
            printf("dieatary restriction for  %s : ", name);
            scanf("%s", guests[i].dietaryRestrictions);
     }
}

void generateInvitations(struct Guest *guests, int numGuests) {
    printf("\nGenerating personalized invitations...\n");
    for (int i = 0; i < numGuests; i++) {
        printf("Dear %s,\n", guests[i].name);
        printf("You're invited to a surprise party!\n");
        printf("Please RSVP to keep the secret \n");
        printf("See you there!\n\n");
    }
}

void print(struct Guest *guests, int numGuests) {

    for (int i = 0; i < numGuests; i++) {
        if (guests[i].rsvp == 'Y' || guests[i].rsvp == 'y')
            printf("%s\tDieatary Resc.: %s\n", guests[i].name, guests[i].dietaryRestrictions);

    }
}