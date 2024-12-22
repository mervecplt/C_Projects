#include <stdio.h>
#include <string.h>
#include <math.h>


typedef struct Point
{
	float x;
	float y;
}Point;

typedef struct Circle{
	Point center;
	float radius;
}Rectangle;


typedef struct Rectangle{
	Point p1;
	Point p2;
	float circumference;
	float area;
}Rectangle;

float calculateCirc(Rectangle );
float calculateArea(Rectangle );

int main(void)
{
	Point p1, p2;
	p1.x = 10.2;
	p1.y = 5.2;
	p2.x = -2.2;
	p2.y = 1.2;
	
	Rectangle r;
	r.p1 = p1;
	r.p2 = p2;
	printf("(%f %f), (%f %f)\n", r.p1.x, r.p1.y, r.p2.x, r.p2.y);
	printf("circ: %f area: %f\n", r.circumference, r.area);
	
	r.circumference = calculateCirc(r);
	r.area = calculateArea(r);
	
	printf("(%f %f), (%f %f)\n", r.p1.x, r.p1.y, r.p2.x, r.p2.y);
	printf("circ: %f area: %f\n", r.circumference, r.area);
	return 0;
}

float calculateCirc(Rectangle r)
{
	double width = fabs(r.p1.x - r.p2.x);
	double height = fabs(r.p1.y - r.p2.y);
	return 2 * (width + height);
}
float calculateArea(Rectangle r)
{
	double width = fabs(r.p1.x - r.p2.x);
	double height = fabs(r.p1.y - r.p2.y);
	return width * height;
}