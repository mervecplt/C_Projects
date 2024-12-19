#include <stdio.h>

void printPrimeFactors(int);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the input is positive
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    printPrimeFactors(number);

    return 0;
}

void printPrimeFactors(int number)
{
    int factor = 2; // The first prime number

    // Loop to divide the number by its smallest prime factor
    while (number > 1)
    {
        if (number % factor == 0)
        { // Check if factor is a prime factor
            printf("%d\n", factor);
            while (number % factor == 0)
            { // Divide the number by factor as long as it's divisible
                number /= factor;
            }
        }
        factor++;
        // Optimization: No need to check beyond the square root of the number
        if (factor * factor > number)
        {
            if (number > 1)
            { // The remaining number is a prime factor
                printf("%d\n", number);
                break;
            }
        }
    }
}