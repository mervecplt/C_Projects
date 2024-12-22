#include <stdio.h>
#include <string.h>


// will concatanate two strings
// the concat. string will be on 
// the first argument
void myStrCat(char [], const char []);
void strToUpper(char []);


int main(void)
{
	char src [20] = "World!";
	char dest [20] = "Hello ";
	
//	strcat(dest, src);
	myStrCat(dest, src);
	printf("strcat->dest = %s\n", dest);
	strToUpper(dest);
	printf("strToUpper->dest = %s\n", dest);
	
 	
	return 0;
}
void myStrCat(char dest [], const char src[])
{
	// 
	// int len = strlen(dest);
	int len = 0, i = 0;
	// manually find the length of the dest
	// this is our starting point
	// to start copying from source
	while(dest[len] != '\0')
		len++;
	//for( ;dest[len] != '\0'; len++);		
	
	// now, we can start copying from source
	
	while(src[i] != '\0')
	{
		// len is our starting point for the dest
		dest[len] = src[i];
		i++;
		len++;
	}
	// mark the end of the string
	dest[len] = '\0';
}

void strToUpper(char dest [])
{
	int i = 0;
	while(dest[i] != '\0')
	{
		if( dest[i] >= 'a' &&
			dest[i] <= 'z')
			{
				dest[i] = 'A' + dest[i] - 'a';
			}
		i++;
	}
}



