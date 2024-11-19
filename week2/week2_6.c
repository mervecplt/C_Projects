// compound interest: A = P(1+R/n)^(nt)
// p: principal amount
// r: interest rate
// n: the number of times the interest is compounded for a year
// t: number of years
// n = 1

#include <stdio.h>
#include <math.h>

double calculateCompoundInterest(double, float, int, int);


int main()
{
	double finalAmount, principal;
	float rate; 
	int n, t;
	printf("principal \n");
	scanf("%lf", &principal);
	printf("rate \n");
	scanf("%f", &rate);
	printf("n \n");
	scanf("%d", &n);
	printf("t \n");
	scanf("%d", &t);
	finalAmount = calculateCompoundInterest(principal, rate, n, t);
	printf("%lf", finalAmount);
	return 0;
}

double calculateCompoundInterest(double principal, float rate, int n, int t)
{
	double finalAmount = principal * pow(1 + rate/n, n*t);
	return finalAmount;
}
