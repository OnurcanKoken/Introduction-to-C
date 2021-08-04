#include <stdio.h>

union member{
	int x;
	float y;
	char z;
}m;

int main(){
	
	int *xAdres; float *yAdres; char *zAdres;
	
	printf("x is :");
	scanf("%d",m.x);
	printf("y is :");
	scanf("%f",&m.y);
	printf("z is :");
	scanf("%c",&m.z);
	
	xAdres = &m.x;
	yAdres = &m.y;
	zAdres = &m.z;
	
	printf("Adress of x=%p\n",xAdres);
	printf("Adress of y=%p\n",yAdres);
	printf("Adress of z=%p\n",zAdres);
	
	return 0;
}
