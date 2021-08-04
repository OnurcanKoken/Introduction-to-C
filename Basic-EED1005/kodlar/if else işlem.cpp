#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()

{
	int x;
	float y;
	
	printf("Bir x degeri giriniz: ");
	scanf("%d",&x);
	
	if(x<=5)
	{
	    y=pow(x,10)-x*x-1;
	    printf("Y degeri = %f dir. ",y);
    }
	else if (5<x<10)
	{
	    y=1+((x-x*x/2)/x+1);
	    printf("Y degeri = %f dir. ",y);
	}
	else if (10<=x<=12)
	{
	    y=1-sqrt(x);
	    printf("Y degeri = %f dir.",y);
	}
	else
	{
	    y=1;
	    printf("Y degeri = %f dir.",y);
	}    
	getch();
	return 0;
}
