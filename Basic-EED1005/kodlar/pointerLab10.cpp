#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int random(int [], int);
double total_a(int [], int);
int main()
{
	int n=10;
	int a[n];
	int i;
	double total;
	
	a[n]=random(a,n);
	
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);	
	}
	
	total=total_a(a,n);
	printf("\nAverage = %.lf\n",total/n);
	printf("Total = %.lf",total);
	
	getch();
	return 0;
}
int random(int a[],int n){
	int *p;
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
		a[i]=rand()%100;
	}
	p=&a[n];
	return *p;
}
double total_a(int a[],int n){
	double *p, t;
	int i;

	for(i=0;i<n;i++){
		t+=a[i];
	}
	p=&t;
	return *p;
}
