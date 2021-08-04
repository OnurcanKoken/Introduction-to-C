/*
Name: Onurcan KÖKEN
Student Number: 2015502053
Date: 03.12.2016 20:23
Description: EED1005 Laboratory Work #7
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "calculatepi.h"

float distance( int, int, int, int ); // function prototype
float diameter( int, int, int, int ); // function prototype
float circumference( float ); // function prototype
float area( float ); // function prototype
int main()	
{
	int x1,x2,y1,y2;
	double r;
	printf("Please enter the center of the circle: \n");
	scanf("%d %d", &x1, &y1);
	
	printf("Please enter a point on the circle: \n");
	scanf("%d %d", &x2, &y2);

	printf("Distance is %.2f\n",distance(x1,x2,y1,y2)); // function call
	printf("Diameter is %.2f\n",diameter(x1,x2,y1,y2)); // function call
	r=distance(x1,x2,y1,y2); // calculating the radius
	printf("Circumference is %.2f\n",circumference(r)); // function call
	printf("Area is %.2f\n",area(r)); // function call
	
	getch();
	return 0; // indicate program ended successfully
}

float distance( int x1, int x2, int y1, int y2 )
{
	float r;
	
	r=pow(x2-x1,2)+pow(y2-y1,2);
	r=sqrt(r);
	
	return r; // return r as a float
}

float diameter( int x1, int x2, int y1, int y2 )
{
	float R;
	
	R=pow(x2-x1,2)+pow(y2-y1,2);
	R=2*sqrt(R);
	
	return R; // return R as a float
}

float circumference ( float r)
{
	double x;
	double n=25000; 
	x=2*4*calculate_pi(n)*r;
	return x; // return x as a float
}

float area( float r)
{
	double x;
	double n=25000;
	x=4*calculate_pi(n)*r*r;
	return x; // return x as a float
}
