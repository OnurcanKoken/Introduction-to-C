#include <stdio.h>

int main()
{
	int i;
	int x[6];
	for(i=0;i<6;i++){
		x[i]=i+1;
		printf("%d",x[i]);
	}
	
	printf("\n");
	
	for(i=5;i>=0;i--){
		printf("%d",x[i]);
	}
	
	return 0;
}
