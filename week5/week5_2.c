#include <stdio.h>

int main(void)
{
	// Interesting facts about char type in C
    
    // Declare a character variable and assign it the value 'A'
    char x = 'A'; 
    
    // A char can be treated as an integer because it is internally stored as a numeric value (ASCII code).
    // Here, we print x both as an integer (its ASCII value) and as a character.
    printf("x=%d %c\n", x, x); // Output: ASCII value and character representation of 'A'

    // Declare another character variable and assign it the value '!'
    char y = '!';
    
    // Perform arithmetic with characters. When used in arithmetic, characters are treated as their ASCII values.
    // Add x and y and assign the result to z.
    char z = y + x; 
    printf("%c + %c = %c\n", x, y, z); // Output: Characters involved and the resulting character
    printf("%d + %d = %d\n", x, y, z); // Output: ASCII values and their sum
    
    // Multiply y by 2 and assign the result to z.
    z = 2 * y; 
    printf("2*%c = %c\n", y, z); // Output: Character y multiplied by 2 and the resulting character
    printf("2*%d = %d\n", y, z); // Output: ASCII value of y multiplied by 2 and the resulting ASCII value

	
	return 0;
}

