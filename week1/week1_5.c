#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celc,fah;
    printf("enter celcius:");
    scanf("%lf", &celc);
    fah=(9.0/5.0*celc)+32;
    printf("Celcius: %.3lf, Fahrenheit: %.3lf",celc, fah);
    return 0;
}