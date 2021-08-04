#include <stdio.h>
#include <conio.h>

int main() /* function main begins program execution */

{
	float x,x_kuvvet,fact, n;
    float k,e,y;

	    printf("please enter the term number>>");
	    scanf("%f",&n); /* read the term number */
    	printf("please enter the x number>>");
	    scanf("%f",&x); /* read the x number */
	    
	k=0;

    x_kuvvet=1;fact=1; e=1;
	
    for(int l=1;l<=n;l++)

    {

        k++;

        x_kuvvet=x_kuvvet*x;

        fact=fact*k;

        e=e+x_kuvvet/fact;

    }
    
    printf("e^%.1f= %f",x,e);

    getch();
	return 0; /* indicate that programme ended succesfully */

} /* end main function */
