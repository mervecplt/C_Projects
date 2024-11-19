#include <stdio.h>
#include <stdlib.h>
float calc_abs (float);

int main()
{
float n;
printf("Enter n:");
scanf("%f",&n);
printf("|%.2f| = %.2f\n", n,calc_abs(n));
return 0;
}

float calc_abs(float n)
{
    if(n>=0)
    {
        return n;
    }
     return -n;
}