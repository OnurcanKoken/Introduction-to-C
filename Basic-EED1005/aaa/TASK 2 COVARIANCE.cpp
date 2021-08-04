#include <stdio.h>
#include <conio.h>
void covariance(float, float);
int main()
{
	int x[5] = {2,4,6,8,10};
	int y[5] = {6,12,18,24,30};
	int i;
	
	float x_average, y_average;
	
	for(i=0;i<5;i++){
		x_average+=x[i];
	}
	x_average/=5;
	for(i=0;i<5;i++){
		y_average+=y[i];
	}
	y_average/=5;
	
	covariance(  x_average,  y_average );
	
	getch();
	return 0;
	
}
void covariance(float a, float b)
{
	int x[5] = {2,4,6,8,10};
	int y[5] = {6,12,18,24,30};
	float c;
	int i;
	for(i=0;i<5;i++){
		c+=(x[i]-a)*(y[i]-b);
	}
	c/=5-1;
	printf("Covariance= %f\n",c);
}

