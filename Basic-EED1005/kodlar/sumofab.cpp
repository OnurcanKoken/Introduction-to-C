/*
    Name : Onurcan KÖKEN
    Student ID : 2015502053
    Date : 02.11.16 22:10
    Description : EED 1005 Preliminary Work #4
*/

#include <stdio.h>
#include <conio.h>

int main(void)

{
	int a, b, sum;
	
	printf("Enter two integer values:\n");
	// let the user enter two integers.
	scanf("%d %d", &a, &b);
	
	sum=a+b;
	// calculating the value of sum.
	
	if(sum>0)
	   
	   printf("sum of a and b is positive.");
	   // if sum is positive display the sum on screen.
	else
	
	   printf("sum of a and b is negative.");
	   // if sum is negative display the sum on screen.
	   
	getch();
	return 0; // successful programme termination
}
