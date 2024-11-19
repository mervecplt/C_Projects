#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r, area, circ;
    double PI=3.14;
    printf("enter the radius of the circle:");
    scanf("%lf", &r);
    area= M_PI*r*r; // M_PI math.h kütüphanesinden gelen PI sayısı
    circ= M_PI*2*r;
    //area= PI*r*r; // PI değişkeni kullanılarak
    //circ= PI*2*r;
    printf("The area of a circle with radius %.3lf is %.3lf\n",r,area);
    printf("The circumference of a circle with radius %.3lf is %.3lf\n",r,circ);
    return 0;
}