    /*
    Name: Onurcan KÖKEN
    Student Number: 2015502053
    Date: 06.11.2016 19:08
    Description: EED1005 Laboratory Work #4
    */

#include <stdio.h>
#include <conio.h>

int main(void)

{
	int a, b, c;
	int sum_1, sum_2, sum_3;
	int r_1, r_2, r_3;
	
	printf("Enter the values of a, b, and c respectively:");
	scanf("%d %d %d", &a, &b, &c); // let the user enter 3 integer
	
	sum_1=a+b;
	sum_2=a+c;
	sum_3=b+c;	
		
	if (a<sum_3 && b<sum_2 && c<sum_1 )	  
	    
		printf("The values %d, %d, and %d can form the three sides of a triangle.\n", a, b, c);
    
	else    
	    printf("The values %d, %d, and %d can not form the three sides of a triangle.\n", a, b, c);
	    
	    r_1=a*a;
	    r_2=b*b;
	    r_3=c*c;
	    
	    if (r_1==r_2+r_3 || r_2==r_1+r_3 || r_3==r_1+r_2)
	    
	    printf("The triangle is a right-triangle.\n");
	    
	    else
	    
	    printf("The triangle is not a right-triangle.\n");
	     
	    getch();
	    return 0;
	    
}
