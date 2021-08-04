#include <stdio.h>
#include <conio.h>
#include <math.h>

float distance( int, int, int, int );
float diameter( int, int, int, int );
float circumference( float );
float area( float );
double calculate_pi( double );
int main()
{
	int x1,x2,y1,y2;
	double r;
	double n=25000; // It is better to use a bigger value to calculate pi
	printf("Please enter the center of the circle: \n");
	scanf("%d %d", &x1, &y1);
	
	printf("Please enter a point on the circle: \n");
	scanf("%d %d", &x2, &y2);

	printf("Distance is %.2f\n",distance(x1,x2,y1,y2));
	printf("Diameter is %.2f\n",diameter(x1,x2,y1,y2)); 
	r=distance(x1,x2,y1,y2);
	printf("Circumference is %.2f\n",circumference(r)); 
	printf("Area is %.2f\n",area(r));
	
	getch();
	return 0;
}

float distance( int x1, int x2, int y1, int y2 )
{
	float r;
	
	r=pow(x2-x1,2)+pow(y2-y1,2);
	r=sqrt(r);
	
	return r;
}

float diameter( int x1, int x2, int y1, int y2 )
{
	float R;
	
	R=pow(x2-x1,2)+pow(y2-y1,2);
	R=2*sqrt(R);
	
	return R;
}

float circumference ( float r)
{
	double x;
	float n=25000;
	x=2*4*calculate_pi(n)*r;
	return x;
}

float area( float r)
{
	double x;
	float n=25000;
	x=4*calculate_pi(n)*r*r;
	return x;
}

double calculate_pi( double n )
{
	double x;
	if ( n==0 )
	{
		return 1;
	}
	
	else
	{
		return pow( -1, n)*(1/(2*n+1))+calculate_pi(n-1);
	}
}
