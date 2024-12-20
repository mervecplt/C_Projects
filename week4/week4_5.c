#include <stdio.h>

void reportPH(float);

int main(void)
{
	float pH;
	printf("enter a val: ");
	scanf("%f" , &pH);
	
	reportPH(pH);
	
	return 0;
}

void reportPH(float pH)
{
	// check if the pH is a valid one
	if(pH <= 14 && pH >= 0)
	{
		// is acid?
		if(pH < 7)
		{
			printf("Acid: ");
			// i know here that pH is acidic
			// now, this is our test for strong acidic
			if(pH < 3)
			{
				printf("Strong");
			}
			else // it is weak acidic
			{
				printf("Weak");
			}
		}
		else if(pH > 7) // is alkaline
		{
			printf("Alkaline: ");
			// i know here that pH is alkaline
			// now, this is our test for strong alkaline 
			if(pH > 11)
			{
				printf("Strong");
			}
			else  // it is weak alkaline
			{
				printf("Weak");
			}
		}
		else // if here, it is neutr.
		{
			printf("Neutral");
		}
	}
	else
	{
		printf("invalid");
	}
}



