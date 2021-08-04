#include <stdio.h>
#include <conio.h>
#include <math.h>
#define SIZE 10
void fabs( int a[], int size ); 
int main(void) 
{
	int a[ SIZE ];
	int i;
	printf("a = ");
	for (i=0;i<10;++i)
	{
		scanf("%d",&a[i]);
	}
	
	fabs( a, SIZE );
	
    getch();
    return 0;
}
void fabs( int a[], int size) 
{
	int n;
	for(n=0;n<size;++n)
	{
		a[n] = fabs(a[n]);
	}
	printf("a = ");
	for(n=0;n<10;++n)
	{
		printf("%d    ",a[n]);
	}
}
