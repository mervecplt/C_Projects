#include <stdio.h>
#include <string.h>

void  printDiamondPattern(char []);

int main() {
    char inputString[51]; // Maximum length is 50, plus 1 for the null terminator '\0'
    printf("Enter a string (up to 50 characters): ");
    scanf("%s", inputString);

    printDiamondPattern(inputString);

    return 0;
}
void printDiamondPattern(char str[]) {
    int length = strlen(str);
    if (length % 2 == 0)
    {
        printf("your string  length must be an odd number\n");
        return;
    }
    int upperTriangleLength, lowerTriangleLength;
    lowerTriangleLength = upperTriangleLength =  length / 2;;
    // Upper part of the diamond
    for (int i = 0; i < upperTriangleLength; i++) {
        // Spaces before characters
        for (int j = 0; j < upperTriangleLength-i; j++) {
            printf(" ");
        }

        // Characters
        for (int k = 0; k < 2*i+1; k++) {
            printf("%c", str[k]);
        }

        printf("\n");
    }
    // print the middle. whole word
    printf("%s", str);
    // put a newline
    printf("\n");
 // Lower part of the diamond
    for (int i = 0; i < lowerTriangleLength; i++) {
        // Spaces before characters
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }

        // Characters
        for (int k = 0; k < length - 2 * (i+1); k++) {
            printf("%c", str[k]);
        }

        printf("\n");
    }

}