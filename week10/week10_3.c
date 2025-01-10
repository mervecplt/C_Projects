#include <stdio.h>

int main(void)
{
    // Declare and initialize variables
    int x = 10, y = 100;
    double a = 5.3;

    // Declare pointers
    int *xPtr;
    double *aPtr;

    // Point xPtr to x and print memory addresses
    xPtr = &x;
    printf("xPtr: %p &x: %p\n", xPtr, &x);

    // Print value of x using pointer dereferencing
    printf("*xPtr: %d x: %d\n", *xPtr, x);

    // Update x and check pointer behavior
    x = y;
    printf("xPtr: %p &x: %p\n", xPtr, &x);
    printf("*xPtr: %d x: %d", *xPtr, x);

    // Change value of x using pointer
    *xPtr = 77;
    printf("xPtr: %p &x: %p\n", xPtr, &x);
    printf("*xPtr: %d x: %d\n", *xPtr, x);

    // Update pointer to point to y
    xPtr = &y;

    printf("xPtr: %p &x: %p &y: %p\n", xPtr, &x, &y);
    printf("*xPtr: %d x: %d y:%d\n", *xPtr, x, y);

    // Adjust pointer arithmetic
    xPtr += 2;
    printf("xPtr: %p &x: %p &y: %p\n", xPtr, &x, &y);
    printf("*xPtr: %d x: %d y:%d\n", *xPtr, x, y);

    // Assign pointer to double variable
	// notice what aPtr+1 returns
    aPtr = &a;
    printf("aPtr: %p &a: %p aPtr+1:%p\n", aPtr, &a, aPtr+1);

    return 0;
}