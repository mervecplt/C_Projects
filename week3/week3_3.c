#include <stdio.h>

float calculateBMI(float, float); // will return bmi value
void reportBMI_v1(float); // will output your bmi info
void reportBMI_v2(float); // will output your bmi info

int main(void)
{
	float weight, height, bmi;
	
	printf("enter weight: ");
	scanf("%f", &weight);
	printf("enter height: ");
	scanf("%f", &height);
		
	bmi = calculateBMI(weight, height);
	//reportBMI_v1(bmi);
	reportBMI_v2(bmi);
	
	return 0;
}

float calculateBMI(float weight, float height)
{
	// option 1
	// return weight / (height * height);
	// option 2
	float bmi = weight / (height * height);
	return bmi;
}

void reportBMI_v1(float bmi)
{
	if(bmi < 18.5)
	{
		printf("underweight");
	}
	else
	{
		if(bmi >= 18.5 && bmi < 25)
		{
			printf("normal");
		}
		else
		{
			if(bmi >= 25 && bmi < 30)
			{
				printf("overweight");
			}
			else
			{
				if(bmi >= 30)
				{
					printf("obese");
				}
			}
		}
	}
}

void reportBMI_v2(float bmi)
{
	/*
	if(bmi < 18.5)
	{
		printf("underweight");
	}
	else if(bmi >= 18.5 && bmi < 25)
	{
		printf("normal");
	}
	else if(bmi >= 25 && bmi < 30)
	{
		printf("overweight");
	}
	else if(bmi >= 30)
	{
		printf("obese");
	}
	*/
	if(bmi < 18.5)
	{
		printf("underweight");
	}
	else if(bmi < 25)
	{
		printf("normal");
	}
	else if(bmi < 30)
	{
		printf("overweight");
	}
	else 
	{
		printf("obese");
	}
}