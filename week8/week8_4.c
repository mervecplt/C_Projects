#include <stdio.h>
#include <string.h>

struct Student
{
	float grade;
	char name[25];
	char lastName[25];
	int age;
};


int main(void)
{
	struct Student myStudent[2];
	myStudent[0].grade = 100;
	myStudent[0].age = 25;
	strcpy(myStudent[0].name,"Ali");
	strcpy(myStudent[0].lastName,"Yilmaz");
	
	printf("%f %d %s %s\n", myStudent[0].grade, myStudent[0].age, myStudent[0].name, myStudent[0].lastName);
	return 0;
}


