#include <stdio.h>

void printAlphabet();
void printAlphabetv2();
int main(void)
{
	printAlphabetv2();	
	return 0;

}

void printAlphabetv2()
{
	char letter = 'A';
	while(letter >= 'A' && letter <= 'z')
	{
		if(!(letter >= '[' && letter <=96))
			printf("%c,", letter);
		letter++;
	}
}
void printAlphabet()
{
	int letter = 65;
	
	while(letter >= 65 && letter <= 122)
	{
		if(letter >= 91 && letter <=96)
		{
			letter++; // my effort to break the loop
			continue;
		}
		printf("%c,", letter);
		letter++; // my effort to break the loop
	}
	
}