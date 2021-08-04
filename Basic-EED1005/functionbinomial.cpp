/*
    Name: Onurcan KÖKEN
    Student Number: 2015502053
    Date: 27.11.2016 09:40
    Description: EED1005 Laboratory Work #6
*/

#include <stdio.h>
#include <conio.h>

int function_binomial(int n); // function prototype
int fac(int x); // function prototype
int main() 
{
	int n;
	printf("Please enter a value: "); 
	// let the user enter a value
	scanf("%d",&n);
	
	function_binomial(n); // function call
	
	getch();
	return 0; // indicate program ended successfully
} // end function main

int function_binomial(int n)
{
	int i,m,k,y;
	for(i=0;i<n;++i)
	{
		for(m=0;m<=(n-i);++m) 
		// this loop makes some spaces to make a triangle
		{
			printf(" ");	
		} // end for
		
		for(k=0;k<=i;++k)
		{
			y=fac(i)/(fac(k)*fac(i-k)); 
			// function call and calculating combinations
			printf("%d ",y);
		} // end for
		
		printf("\n"); // begin new line
	} // end for
} /* end function function_binomial */

int fac(int x)
{
	int t;
	int z=1;
	
	for(t=1;t<=x;++t) // calculating factorial
	{
		z=z*t;
	} // end for
	
	x=z;
	
	return x; // return x as an int
} /* end function fac */
