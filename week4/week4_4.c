#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double draft(double, double);

int main() {

    srand(time(NULL));

    double withdrawal;
    double balance = (rand() % 4001) + 1000; // 1000 ile 5000 arasında rastgele bir bakiye değeri üretme
    printf("Welcome to my bank\nEnter amount to withdraw: $");
    scanf("%lf", &withdrawal);
    printf("\nyour balance is :%.3lf\n",balance);
    // call the function and return the balance back
    balance = draft(balance, withdrawal);
    printf("Your balance is %.3lf after withdrawal\n", balance);

    return 0;
}

double draft(double balance, double withdrawal)
{
    if (withdrawal <= balance)
    {
        printf("Sufficient amount\n");
        balance = balance - withdrawal;
    }
    else if (withdrawal <= balance * 1.1)
    {
        printf("You are getting an overdraft of %.2lf\n", withdrawal - balance);
        balance = balance - withdrawal;
    }
    else
    {
        printf("Insufficient amount...\n");
    }
    return balance;
}