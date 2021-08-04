/*
Name: Onurcan KÖKEN
Student Number: 2015502053
Date: 03.12.2016 20:30
Description: EED1005 Laboratory Work #7
*/

// this is a header that called "calculatepi.h"

#include <stdio.h>
#include <conio.h>
#include <math.h>

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
