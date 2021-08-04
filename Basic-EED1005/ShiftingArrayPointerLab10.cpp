#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int random_array(int x[],int n);
int shifting(int x[], int n);
int main(void)
{
	int n,i;
	srand(time(NULL));
	
	n=rand()%10; 
	if(n<=2){ 
		n+=3;
	}

	int x[n];
	
	x[n]=random_array(x,n);
	printf("Original array:");
	for(i=0;i<n;i++)
	{
		printf("%d  ",x[i]);
	}
	
	x[n]=shifting(x,n);
	printf("\nShifted array:");
	for(i=0;i<n;i++)
	{
		printf("%d  ",x[i]);
	}
	
	getch();
	return 0;
}
int random_array(int x[],int n)
{
	int *p;
	int i;
	int k;

	for(i=0;i<n;i++)
	{
		x[i]=rand()%10;
	
	}
	
	p=x;
	return *p;
}
int shifting(int x[], int n)
{
	int *p, i, k, m;
	int a[n];
	k=n/2;
	m=n-1;
	a[n]=x[n];
	for(i=0;i<k;i++){
		a[i]=x[m];
		x[m]=x[i];
		x[i]=a[i];
		m--;
	}
	p=x;
	return *p;
}
