/*
    Name: Onurcan KÖKEN
    Student Number: 2015502053
    Date: 27.11.2016 09:40
    Description: EED1005 Laboratory Work #6
*/

#include <stdio.h>
#include <conio.h>

int triangular(int); // function prototype
int main()
{
	int y;
	int n;
	int x;
	
	printf("Please enter a value: ");
	// let the user enter a value
	scanf("%d",&n);
	
	y=triangular(n); // function call
	
	printf("Triangular number %d is %d",n,y);
	// display the result
	
	getch();
	return 0; // indicate program ended successfully
} // end function main

int triangular(int n)
{
	int x;
	x=(n*(n+1))/2;
	return x; // return x as an int
} // end function triangular
