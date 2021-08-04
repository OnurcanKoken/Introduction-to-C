#include <stdio.h>
#include <math.h>
const float g=9.81;
int x,h;
float t,l;
int main()
{
	printf("Yuksekligi Giriniz: ");
	scanf("%d",&h);
	t=sqrt(2*(h/g));
	for(x=0;x<=t;x++){
		l=0.5*g*x*x;
		printf("%d\t%.2f\n",x,h-l);
	}
	return 0;
}
