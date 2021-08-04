#include <stdio.h>
#include <conio.h>

int main(void)

{
	float H;
	double n1, n2, n3, n4, n5, N;
	
	N=5;
	
	printf("Please enter number_1: ");
	scanf("%lf",&n1);
	
	printf("Please enter number_2: ");
	scanf("%lf",&n2);
	
	printf("Please enter number_3: ");
	scanf("%lf",&n3);
	
	printf("Please enter number_4: ");
	scanf("%lf",&n4);
	
	printf("Please enter number_5: ");
	scanf("%lf",&n5);
	
	H=N/(1/n1+1/n2+1/n3+1/n4+1/n5);
	
	printf("Harmonic mean = %f ",H);
	
	getch();
	
	return 0;  /* indicate that programme ended successfully */
	
} /* end function main */
