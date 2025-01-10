#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare and initialize an array of doubles with specific values
    double a[] = {.0, .2, .15, .1, .4, .5, 12.2, 13.2, 4.1, 12.4, 44.4};
    
    // Declare a pointer to a double and initialize it to point to the start of the array
    double *aPtr = a; // Equivalent to &a[0]

    // Print the value and address of the first element in the array using the pointer and array notation
    printf("%lf %p %lf %p\n", *aPtr, aPtr, a[0], &a[0]);

    // Move the pointer to point to the 6th element of the array (index 5)
    aPtr = aPtr + 5;

    // Print the value and address of the 6th element using the pointer and array notation
    printf("%lf %p %lf %p\n", *aPtr, aPtr, a[5], &a[5]);

    // Access and print values using pointer arithmetic and array indexing
    // - *(aPtr-2): Value 2 positions before the current pointer position
    // - aPtr[0]: Value at the current pointer position (equivalent to *aPtr)
    // - aPtr[2]: Value 2 positions after the current pointer position
    // - aPtr[-3]: Value 3 positions before the current pointer position
    // - *(aPtr+4): Value 4 positions after the current pointer position
    printf("%lf %lf %lf %lf %lf\n", *(aPtr-2), aPtr[0], aPtr[2], aPtr[-3], *(aPtr+4));
}