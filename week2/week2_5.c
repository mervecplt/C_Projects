#include <stdio.h>
#include <math.h>

// function prototype
// type nameofthefunction(arguments if there are any)
// function declaration: you anounce that you will have a function
// with the given return type, name and args
double calculateDistance(double, double, double, double);

int main()
{
	// distance between two point in 2d
	// distance between (x1, y1) (x2, y2) 
	// sqrt((x1-x2) * (x1-x2) + (y1-y2)*(y1-y2))
	
	// vars
	double x1, x2, y1, y2, distance;
	printf("enter the coordinates of the first point: ");
	scanf("%lf%lf", &x1, &y1);
	printf("enter the coordinates of the second point: ");
	scanf("%lf%lf", &x2, &y2);
	
	distance = calculateDistance(x1, y1,  x2,  y2);	
	
	printf("Distance between (%.2lf, %.2lf) and (%.2lf , %.2lf) is %.2lf\n",x1, y1, x2, y2, distance);
	
	printf("enter the coordinates of the first point: ");
	scanf("%lf%lf", &x1, &y1);
	printf("enter the coordinates of the second point: ");
	scanf("%lf%lf", &x2, &y2);
	
	distance = calculateDistance(x1, y1, x2, y2);	
	
	printf("Distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is %.2lf\n",x1, y1, x2, y2, distance);
	
	
	
	return 0;
}

// implementation: 
double calculateDistance(double x1, double y1, double x2, double y2)
{
	double distance = sqrt(pow(x1-x2, 2) + pow(y1-y2,2));
	return distance;
}

