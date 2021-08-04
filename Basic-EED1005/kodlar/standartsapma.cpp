#include <stdio.h>
#include <math.h>
int main()
{
	int x[10] = { 15, 25, 5, 12, 6, 9, 12, 32, 17, 0};
	float a,x_ort;
	int i;
	
	for(i=0;i<10;i++){
		x_ort+=x[i];
	}
	
	for(i=0;i<10;i++){
		a+=pow((x_ort-x[i]),2);	
	}
	
	a/=9;
	a=sqrt(a);
	
	printf("Standart sapma = %.2f",a);
	
	return 0;
}
