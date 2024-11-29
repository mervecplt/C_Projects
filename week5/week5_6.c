#include <stdio.h>

#define MAX_TRIES 5
#define PASSWORD 1234

int checkPasswordWithFor();
int checkPasswordWithWhile();
int checkPasswordWithDoWhile();



int main()
 {
    int success;

    //success = checkPasswordWithFor();
    //success = checkPasswordWithWhile();
    success = checkPasswordWithDoWhile();

    if(success) {
        printf("Correct password\n");
    }
    else{
        printf("Fail\n");
    }


    return 0;
}

int checkPasswordWithFor()
{
    int i, userPassword;
    for(i=0; i < MAX_TRIES; i++)
    {
        printf("Enter your password: ");
        scanf("%d", &userPassword);
        if(userPassword == PASSWORD)
            return 1;
    }
    return 0;
}

int checkPasswordWithWhile()
{
    int i=0, userPassword;
    while(i < MAX_TRIES)
    {
        printf("Enter your password: ");
        scanf("%d", &userPassword);
        if(userPassword == PASSWORD)
            return 1;
        i++;
    }
    return 0;
}


int checkPasswordWithDoWhile()
{
    int i=0, userPassword;
    do
    {
        printf("Enter your password: ");
        scanf("%d", &userPassword);
        if(userPassword == PASSWORD)
            return userPassword;
        i++;
    }while(i < MAX_TRIES);
    return 0;

}