
#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE 30
int menu();
FILE* openFileForUpdate();
FILE* readTheFile(FILE *);
FILE* writeTheFile(FILE *);
FILE* updateTheFile(FILE *);
FILE* deleteFromTheFile(FILE *);
void displayByAccountNumber(FILE *);

typedef struct
{
	int accountNumber;
	float balance; // how much i have in my bank account
	char name[STR_SIZE];
	char lName [STR_SIZE];
}Customer;




int main(void)
{
	FILE *fPtr = openFileForUpdate();
	int option;
	do{
		option = menu();
		switch (option)
		{
			case 1:
				fPtr = readTheFile(fPtr);
				break;
			case 2:
				fPtr = writeTheFile(fPtr);
				break;
			case 3:
				fPtr = updateTheFile(fPtr);
				break;
			case 4:
				fPtr = deleteFromTheFile(fPtr);
				break;
			case 5:
				displayByAccountNumber(fPtr);
				break;
			case 6:
				printf("exiting...");
				break;
			default:
				printf("inccorect option...\n");
				break;
		}

	}while(option != 6);
	fclose(fPtr);
	return 0;
}

int menu()
{
	int option;
	printf("\n1->Read");
	printf("\n2->Write");
	printf("\n3->Update");
	printf("\n4->Delete");
	printf("\n5->Search");
	printf("\n6->Exit");
	printf("\nEnter your choice: ");

	scanf("%d", &option);


	return option;

}

// examine this function. we try to open the file in read/write mode
// if the file does not open, we try to create it.
// the fPtr, file pointer, is returned by the function.
FILE* openFileForUpdate()
{
	FILE *fPtr = fopen("cust.bnk", "rb+");
	if(fPtr == NULL)
	{
		//if here, possibly the file does not exist, so create
		printf("cannot open the file...trying to create it now...\n");
		fPtr = fopen("cust.bnk", "wb+");
		if(fPtr == NULL)
		{
			printf("cannot create the file...\n");
			//return 1;
			exit(1);
		}
	}
	return fPtr;

}
// same what we did in class except it accepts a file poitners and returns it to update our local variable
FILE* writeTheFile(FILE *fPtr)
{
	Customer cust;
	// stdout: the standad output device
	fprintf(stdout, "enter name, lastName, accountNumber, balance: ");
	scanf("%s%s%d%f", cust.name,
					  cust.lName,
					  &(cust.accountNumber),
					  &(cust.balance));
	// stdin: standard input device
	while(!feof(stdin))
	{
		if(cust.accountNumber > 0)
		{
			// locates you into a specified position defined by your offsset.

			fseek(fPtr, sizeof(Customer) * (cust.accountNumber - 1), SEEK_SET);
			fwrite(&cust, sizeof(Customer), 1, fPtr);
		}
		fprintf(stdout, "enter name, lastName, accountNumber, balance: ");
		scanf("%s%s%d%f", cust.name,
					  cust.lName,
					  &(cust.accountNumber),
					  &(cust.balance));
	}
	return fPtr;

}

// WE Did this in class. the only difference is that we pass FILE *
// and return FILE * to get the changes to our local variable
FILE* readTheFile(FILE *fPtr)
{
	Customer cust;
	// Since the file is already open, ensure you rewind it
	rewind(fPtr);

	fread(&cust, sizeof(Customer), 1, fPtr);
	// stdin: standard input device
	while(!feof(fPtr))
	{
		if(cust.accountNumber != 0)
		{
			fprintf(stdout, "%s %s %d %.3f\n",
										cust.name,
										cust.lName,
										cust.accountNumber,
										cust.balance);
		}
		fread(&cust, sizeof(Customer), 1, fPtr);

	}
	return fPtr;
}

void displayByAccountNumber(FILE* fPtr)
{
	Customer cust;
	int accountNumber;
	fprintf(stdout, "Account number to look: ");
	scanf("%d", &accountNumber);

	fseek(fPtr, sizeof(Customer) * (accountNumber-1), SEEK_SET);
	fread(&cust, sizeof(Customer), 1, fPtr);
	if(cust.accountNumber != 0)
	{
		fprintf(stdout, "%s %s %d %.3f\n",
									cust.name,
									cust.lName,
									cust.accountNumber,
									cust.balance);
	}
	else
	{
		fprintf(stdout, "No such a customer\n");
	}
}


// COMPLETE THE BELOW FUNCTION
// 1. ask the accountNumber
// 2. use fseek to locate the associated record
// 3. read the record
// 4. check if the record (accountNumber) is 0 or not (0 means there is no such customer) and matches with the accountNumber that has been entered
// 5. If it is not 0, ask the new customer information other than account number
// 6. make sure your position is correct with fseek and use fwrite to update the record

FILE* updateTheFile(FILE* fPtr)
{
	Customer cust;
	int accountNumber;
	fprintf(stdout, "Account number to look: ");
	scanf("%d", &accountNumber);

	fseek(fPtr, sizeof(Customer) * (accountNumber-1), SEEK_SET);
	fread(&cust, sizeof(Customer), 1, fPtr);
	// check if the position is not empty and matches the account number
	if(cust.accountNumber != 0 && accountNumber == cust.accountNumber)
	{

		printf("old name is %s what is the new name: ", cust.name);
		scanf("%s", cust.name);
		printf("old lastname is %s what is the new lastname: ", cust.lName);
		scanf("%s", cust.lName);
		printf("old balance is %.3f what is the new balance: ", cust.balance);
		scanf("%f", &cust.balance);
		fseek(fPtr, (accountNumber - 1) * sizeof(Customer), SEEK_SET);
		fwrite(&cust, sizeof(Customer), 1, fPtr);

		/*fprintf(stdout, "enter name, lastName, and balance: ");
		scanf("%s%s%f", cust.name,
					  cust.lName,
					  &(cust.balance));
		fprintf(stdout, "NAME %s, lastName %s, and balance %f: ", cust.name, cust.lName, cust.balance);fseek(fPtr, sizeof(Customer) * (accountNumber-1), SEEK_SET);
		fwrite(&cust, sizeof(Customer), 1, fPtr);*/
	}
	else
	{
		fprintf(stdout, "No such a customer\n");
	}
	return fPtr;
}


// COMPLETE THE BELOW FUNCTION
// 1. ask the accountNumber
// 2. use fseek to locate the associated record
// 3. read the record
// 4. check if the record (accountNumber) is 0 or not (0 means there is no such customer) and matches with the accountNumber that has been entered
// 5. If it is not 0, create an invalid customer
// 6. ensure your poisition is correct with fseek and use fwrite to write the invalid record
FILE* deleteFromTheFile(FILE *fPtr)
{
	Customer cust;
	int accountNumber;
	fprintf(stdout, "Account number to look: ");
	scanf("%d", &accountNumber);

	fseek(fPtr, sizeof(Customer) * (accountNumber-1), SEEK_SET);
	fread(&cust, sizeof(Customer), 1, fPtr);
	// check if the position is not empty and matches the account number
	if(cust.accountNumber != 0 && accountNumber == cust.accountNumber)
	{
		// cretate an invalid record
		cust.accountNumber = 0;
		cust.name[0] = '\0';
		cust.lName[0] = '\0';
		fseek(fPtr, sizeof(Customer) * (accountNumber-1), SEEK_SET);
		fwrite(&cust, sizeof(Customer), 1, fPtr);
	}
	else
	{
		fprintf(stdout, "No such a customer\n");
	}
	return fPtr;

}