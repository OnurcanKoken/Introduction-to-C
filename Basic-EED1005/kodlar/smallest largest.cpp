    /*
    Name: Onurcan KÖKEN
    Student Number: 2015502053
    Date: 06.11.2016 19:08
    Description: EED1005 Laboratory Work #4
    */

#include <stdio.h>
#include <conio.h>

int main()

{
	int a, b, c, d, e, min, max;
	
	printf("Input 5 different integers:");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	    
	    {
		
	    max=b;
	    min=a;
	    
	    if(c>max)
	    max=c;
	    else if(d>max)
	    max=d;
	    else if(e>max)
	    max=e;
     
	    
		if(c<min)
		min=c;
		else if(d<min)
		min=d;
		else if(e<min)
		min=e;
		
        }
    
    printf("Smallest is %d\n",min);
    printf("Largest is %d\n",max);
    
    getch();
    return 0;
    
}
