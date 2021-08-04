#include <stdio.h>

int main()
{
	int n;
	int i;
	float x_average;
	printf("Enter n: ");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++){
		x[i]=i+1;
		printf("%d.number = %d\n",x[i],i);
		x_average+=x[i];
	}
	
	x_average/=n;
	
	printf("Average = %.2f",x_average);
	
	return 0;
}
