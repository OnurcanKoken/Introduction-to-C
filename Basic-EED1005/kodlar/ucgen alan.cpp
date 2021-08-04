#include <stdio.h>
#include <math.h>


int main()

{
	int a, b, c;
	float u, alan;
	
	printf("a degerini giriniz : ");
	scanf("%d",&a);
	printf("b degerini giriniz : ");
	scanf("%d",&b);
	printf("c degerini giriniz : ");
	scanf("%d",&c);
	
	if ( a<0 && b<0 && c<0)
	    printf("Ucgen olusmaz");
	else if (a+b<=c && a+c<=b && b+c<=a)
	{
		u=(a+b+c)/2;
		alan=sqrt(u*(u-a)*(u-b)*(u-c));
		printf("alan = %f dir.",alan);
	}
	else
	{
	    printf("Ucgen olusmaz");
    }
	
	return 0;
	
}
	

