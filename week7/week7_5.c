#include <stdio.h>
#include <string.h>

void reverseString(char []);

int main() {
    char inputString[51]; // Maximum length is 50, plus 1 for the null terminator '\0'

    // Get input from the user
    printf("Enter a string (up to 50 characters): ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character from the input
   // inputString[strcspn(inputString, "\n")] = '\0';

    // Reverse the string
    reverseString(inputString);

    // Print the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0; // Exit the program successfully
}
void reverseString(char str[]) {
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Use two pointers to reverse the string
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers towards each other
        start++;
        end--;
    }
}