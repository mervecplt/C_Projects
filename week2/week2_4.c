#include <stdio.h>
#include <math.h>

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
	
	distance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
		
	printf("Distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is %.2lf\n",x1, y1, x2, y2, distance);
	
	
	return 0;
}