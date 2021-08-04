#include <stdio.h>

int main()
{
	float ort;
	int i;
	int a=1;
	for(i=1;a!=0;i++){
		printf("Please enter a number(enter 0 to exit): ");
	    scanf("%d",&a);
	    ort+=a;
	}
	ort/=i-2;
	
	printf("Average is = %.2f",ort);
	
	return 0;
}
