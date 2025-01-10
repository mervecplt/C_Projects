#include <stdio.h>
#include <string.h>

// Function prototypes for various tasks using recursion and iteration
int sumToN(int); // Iterative function to calculate the sum of numbers up to N
int recSumToN(int); // Recursive function to calculate the sum of numbers up to N
int posPower(int, int); // Iterative function to calculate the positive power of a number
int recPosPower(int, int); // Recursive function to calculate the positive power of a number
int isPalindrome(const char[]); // Iterative function to check if a string is a palindrome
int recIsPalindrome(const char[], int, int); // Recursive function to check if a string is a palindrome
void reverse(char[]); // Iterative function to reverse a string
void recReverse(char[], int, int); // Recursive function to reverse a string
int fibo(int); // Iterative function to calculate the nth Fibonacci number
int recFibo(int); // Recursive function to calculate the nth Fibonacci number

int main(void)
{
    // Uncomment lines below to test individual functions

    // printf("%d \n", sumToN(100)); // Test iterative sumToN
    // printf("%d \n", recSumToN(100)); // Test recursive sumToN

    // printf("%d \n", posPower(2, 10)); // Test iterative posPower
    // printf("%d \n", recPosPower(2, 3)); // Test recursive posPower

    // Example with strings
    /*char str[100] = "pamukkale";
    printf("%s is %sa palindrome\n", str, isPalindrome(str) ? "" : "not "); // Test iterative palindrome check
    printf("%s is %sa palindrome\n", str, recIsPalindrome(str, 0, strlen(str)-1) ? "" : "not "); // Test recursive palindrome check

    // String reversal
    printf("enter a str:");
    scanf("%s", str);
    printf("before reverse %s\n", str);
    reverse(str); // Reverse the string iteratively
    printf("after reverse func: %s\n", str);
    recReverse(str, 0, strlen(str)-1); // Reverse the string recursively
    printf("after recReverse func: %s \n", str);*/

    // Fibonacci examples
    int n = 20;
    printf("F(%d) = %d", n, fibo(n)); // Test iterative Fibonacci
    printf("F(%d) = %d", n, recFibo(n)); // Test recursive Fibonacci

    return 0;
}

// Iterative function to calculate the sum of numbers from 1 to N
int sumToN(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = n + sum;
        n--;
    }
    return sum;
}

// Recursive function to calculate the sum of numbers from 1 to N
int recSumToN(int n)
{
    // Base case: when n is 0, return 0
    if (n == 0)
    {
        return 0;
    }
    return n + recSumToN(n - 1); // Recursive step
}

// Iterative function to calculate a**b
int posPower(int a, int b)
{
    int p = 1;
    while (b >= 1)
    {
        p = a * p;
        b--;
    }
    return p;
}

// Recursive function to calculate a**b
int recPosPower(int a, int b)
{
    // Base case: any number raised to 0 is 1
    if (b == 0)
    {
        return 1;
    }
    return a * recPosPower(a, b - 1); // Recursive step
}

// Iterative function to check if a string is a palindrome
int isPalindrome(const char str[])
{
    int front = 0, back = strlen(str) - 1;
    while (front < back)
    {
        if (str[front] != str[back]) // If characters mismatch
            return 0;
        front++;
        back--;
    }
    return 1; // String is a palindrome
}

// Recursive function to check if a string is a palindrome
int recIsPalindrome(const char str[], int front, int back)
{
    // Base case: if mismatch or indices cross
    if (str[front] != str[back])
        return 0;
    if (front >= back)
        return 1; // String is a palindrome
    return recIsPalindrome(str, front + 1, back - 1); // Recursive step
}

// Iterative function to reverse a string
void reverse(char str[])
{
    int front = 0, back = strlen(str) - 1;
    while (front < back)
    {
        char temp = str[back];
        str[back] = str[front];
        str[front] = temp;
        front++;
        back--;
    }
}

// Recursive function to reverse a string
void recReverse(char str[], int front, int back)
{
    // Base case: when indices cross
    if (front >= back)
        return;

    char temp = str[back];
    str[back] = str[front];
    str[front] = temp;
    recReverse(str, front + 1, back - 1); // Recursive step
}

// Iterative function to calculate the nth Fibonacci number
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int f0 = 0, f1 = 1, fn;
    while (n >= 2)
    {
        fn = f0 + f1;
        f0 = f1; // Update for next iteration
        f1 = fn;
        n--;
    }
    return f1;
}

// Recursive function to calculate the nth Fibonacci number
int recFibo(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return recFibo(n - 1) + recFibo(n - 2); // Recursive step
}