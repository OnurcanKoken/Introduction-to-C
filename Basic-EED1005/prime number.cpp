#include <stdio.h>
#include <conio.h>

int main() /* function main begins program execution */
{
	int x,y,z;
	printf("please enter a number>"); /*let the user enter a number */
	scanf("%d",&x); /* read the number */
	
	z=0;
	
	for(y=2;y<x;++y)
	{
		if(x%y==0)
		{
			z=1;
			break; /* if z equals to 1 exit */
		}
	}
	if(z==1)
	printf("it is not a prime number.");
	else
	printf("it is a prime number.");
	
	getch();
	return 0; /* indicate that programme ended succesfully */
} /* end main function */
