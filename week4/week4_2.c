#include <stdio.h>

int absValue(int);
int absValueTernary(int);

int main(void)
{
	int val;
	printf("enter  val: ");
	scanf("%d", &val);
	printf("with if conditions of %d is %d\n", val, absValue(val));
	printf("with ternary of %d is %d\n", val, absValue(val));
	
	return  0;
}

int absValue(int val)
{
	/*
	if(val < 0)
		return -val; //-1*val
	else
		return val;
	*/
	int result;
	if(val < 0)
		result = -val; //-1*val
	else
		result = val;
	return result;
}

int absValueTernary(int val)
{ 
	//int result = val < 0 ? -val : val;
	//return results;
	return val < 0 ? -val : val;
}

