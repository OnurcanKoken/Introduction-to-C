#include <stdio.h>
#include <conio.h>
void covariance(int [], int, int []);
int main()
{
	int x[5] = {2,4,6,8,10};
	int y[5] = {6,12,18,24,30};
	
	covariance(x,5,y);
	
	getch();
	return 0;
	
}
void covariance(int x[], int d, int y[])
{
	float x_average, y_average;
	int i;
	
	for(i=0;i<d;i++){
		x_average+=x[i];
	}
	x_average/=5;
	for(i=0;i<d;i++){
		y_average+=y[i];
	}
	y_average/=5;
	
	float c;

	for(i=0;i<d;i++){
		c+=(x[i]-x_average)*(y[i]-y_average);
	}
	c/=5-1;
	printf("Covariance= %f\n",c);
}

