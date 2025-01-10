#include <stdio.h>

// Function prototypes
int square(int); // Function to square a number (pass-by-value)
void squareWPtr(int *); // Function to square a number (pass-by-reference)

int main(void)
{
    int n = 100;

    // Call pass-by-value square function
    int n2 = square(n);
    printf("n: %d n2: %d\n", n, n2);

    // Call pass-by-reference square function
    squareWPtr(&n);
    printf("n after squareWPtr: %d \n", n);

    return 0;
}

// Function to compute the square (pass-by-value)
int square(int n)
{
    n = n * n; // Square the input value
    return n;  // Return the squared value
}

// Function to compute the square (pass-by-reference)
void squareWPtr(int *n)
{
    *n = *n * *n; // Square the value at the pointer address
}