#include <stdio.h>
#include <conio.h>

int main() /* function main begins program execution */
{
	int n,k,f,i,a,b,t;
	float x;
	
	printf("Please enter the n>>"); /* let the user enter the n */
	scanf("%d",&a);
	printf("Please enter the k>>"); /* let the user enter the k */
	scanf("%d",&b);
	
	n=a;
	k=b;
	t=1;
	
	    for(i=1;i<=n;++i) /* calculating n! */
	{
		t=t*i;
	}
	
	n=t;
	t=1;
	
    	for(i=1;i<=k;++i) /* calculating k! */
	{
		t=t*i;
	}
	
	k=t;
	f=a-b;
	t=1;
	
	    for(i=1;i<=f;++i) /* calculating (n-k)! */
	{
		t=t*i;
	}
	
	f=t;
	
	x=n/(k*f);
	
	printf("a %d combination of %d elements = %.2f",b,a,x);
	
	getch();
	return 0; /* indicate that programme ended succesfully */
} /* end main function */
