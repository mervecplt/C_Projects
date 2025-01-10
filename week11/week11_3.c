#include <stdio.h>
#include <stdlib.h>

// Function prototype for converting a string to lowercase
void lowerCase(char *);

int main(void)
{
    // Declare and initialize a string with uppercase characters
    char s[] = "YALOVA UNIVERSITESI";
    
    // Print the original string and its starting memory address
    printf("%s %p\n", s, s);

    // Call the function to convert the string to lowercase
    lowerCase(&s[0]);

    // Print the modified string and its starting memory address
    printf("%s %p", s, s);
}

void lowerCase(char *str)
{
    // Iterate through the string until the null terminator is reached
    while(*str != '\0')
    {
        // Check if the current character is an uppercase letter
        if(*str >= 'A' && *str <= 'Z')
            *str = *str + 32; // Convert the letter to lowercase by adding 32

        // Move to the next character in the string
        str = str + 1;
    }
}