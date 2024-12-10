#include <stdio.h>
#include <string.h>

// const guarantees that the content of the variable
// will not change 
void myCopy(char [], const char []);
int getStrLen(const char []);
int isPalindrome(const char []);

int main(void)
{
	char str[100] = "ahmet";
	char str1[100];
	//str1 = "murat"; // illegal after declaration
	// we should copy the contents with strcpy
	//strcpy(str, "murat");
	//strcpy(str1, "ahmet");
	// str is actually the address of the first variable of the array
	myCopy(&str[0], "murat"); // the compiler will add \0 
	myCopy(str1, str);
	// check for the palindrome
	myCopy(&str[0], "adanada");
	myCopy(str1, "adanaa\0");
	printf("str %s str1 %s str's len: %d\n", str, str1, getStrLen(str));
	printf("%s is %s a palindrome\n", str, isPalindrome(str) ? "":"not");
	printf("%s is %s a palindrome\n", str1, isPalindrome(str1) ? "":"not");
	
	
	/*
		
	printf("%s\n", str);
	// str = "ahmet"; // illegal
	str[0] = 'a';
	str[1] = 'h';
	str[2] = 'm';
	str[3] = 'e';
	str[4] = 't';
	str[5] = '\0';
	printf("%s\n", str);
	
	*/
	
 	
	return 0;
}

int getStrLen(const char str[])
{
	int len = 0;
	// Until we see the null character
	while(str[len] != '\0')
	{
		len++; // increment len 
	}
	return len;
}

void myCopy(char dest [], const char src [])
{
	// get the length of the string
	int srcLen = getStrLen(src), i = 0;
	while(i < srcLen) // src[i] != '\0'
	{
		dest[i] = src[i]; // copy i-th char to dest
		i++;
	}
	// we are done copying.
	// mark the end of the dest
	dest[i] = '\0';
}

int isPalindrome(const char str [] )
{
	int i = 0, len = getStrLen(str); // strlen(str);
	while(i < len/2) // traverse until we get the middle
	{
		// check if the current char and its corresponding
		// are not equal
		if(str[i] != str[len-1-i]) 
			return 0; // not a palindrome 
		i++; // increment i to check the next chars.
	}
	return 1;
}
