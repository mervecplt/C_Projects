#include <stdio.h>


int gcd(int, int);



int main() {
    int num1, num2;

    printf("Enter the first positive integer: ");
    scanf("%d", &num1);
    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Both numbers must be positive integers.\n");
        //return 1;
    }


    //while (1) {
      //  printf("Enter the first positive integer: ");
        //scanf("%d", &num1);
        //printf("Enter the second positive integer: ");
        //scanf("%d", &num2);

       // if (num1 <= 0 || num2 <= 0)
        //{
          //  printf("Both numbers must be positive integers.\n");
        //} else
        //{
          //  break; // Geçerli giriş yapıldığında döngüden çık.
        //}
    //}


    int result = gcd(num1, num2);
    printf("The Greatest Common Divisor of %d and %d is %d.\n", num1, num2, result);

    return 0;
}



int gcd(int a, int b) {
    int smaller = (a < b) ? a : b; // Determine the smaller number
    int gcd;
    // Start with the smaller number and count down to 1
    for (int i = 1; i <= smaller; i++)
    {
        if (a % i == 0 && b % i == 0) {
            gcd = i; // If both numbers are divisible by i, then i is the GCD
        }
    }
    return gcd; // This line is reached only if no GCD is found other than 1
}