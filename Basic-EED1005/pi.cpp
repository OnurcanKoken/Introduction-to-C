#include <stdio.h>
#include <conio.h>
#include <math.h>

double calculate_pi( double );

int main()
{
	double n=25000;
	
	printf("%.2f",4*calculate_pi(n));
	
	getch();
	return 0;
}

double calculate_pi( double n )
{
	if ( n==0 )
	{
		return 1;
	}
	
	else
	{
		return pow( -1, n)*(1/(2*n+1))+calculate_pi(n-1);
	}
}

