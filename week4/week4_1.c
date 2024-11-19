#include <stdio.h>

/*
0 - 50 GB: TL0.50 per GB
51 - 100 GB: TL0.75 per GB
101 - 200 GB: TL1.00 per GB
Above 200 GB: TL1.25 per GB
If data usage exceeds 200 GB, a surcharge of 10% is added.
*/
float calculateFee(int);


int main(void)
{
	int usage;
	printf("what is your internet usage");
	scanf("%d", &usage);
	
	printf("the fee for %d GB is %f\n", usage, calculateFee(usage));
	return 0;
}

float calculateFee(int usage)
{
	float total;
	if(usage <= 50)
	{
		total = (usage - 0) * .5;
	}
	else if(usage <= 100)
	{
		total = 50 * .5 + (usage - 50) * .75;
	}
	else if (usage <= 200)
	{
		total = 50 * .5 + 50 * .75 + (usage - 100) * 1;
	}
	else if (usage > 200)
	{
		total = 50 * .5 + 50 * .75 + 100 * 1  + (usage - 200) * 1.25;
		total = total * 1.1; //total *= 1.1; //total += total * .1;
	}
	return total;
}