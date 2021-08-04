    /*   
    Name: Onurcan KÖKEN
    Student Number: 2015502053
    Date: 04.10.2016 21:52
    Description : EED1005 Preliminary Work #1
    */

#include <stdio.h>
int main (void)
{
	float x;
	float y;
	
	printf("Please enter x value:");
	scanf("%f", &x);
	
	y=3/((5*x*x*x)-(3*x*x)+(7*x)-2);
	
	printf("y is equal to %.3f\n", y);
	
	return 0; /* indicate that programme ended succesfully */
	
}   /* end fuction main */
