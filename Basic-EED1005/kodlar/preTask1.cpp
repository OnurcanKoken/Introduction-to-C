#include <stdio.h>

int main(){
	int A[]={0,7,3,1,4};
	int *p;
	p = A;
	printf("%d\n",&*p);
	printf("%d\n",A);
	printf("%d",*(p+2));
	return 0;
}
