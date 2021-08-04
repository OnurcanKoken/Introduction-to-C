#include <stdio.h>
#include <conio.h>

int main(void)
{
	int age[10]={24,15,54,35,13,40,38,21,18,32};
	float average;
	int i;
	
	for(i=0;i<10;i++){
		
		average+=age[i];
	}
	
	printf("Average = %.1f",average/10);
	
	getch();
	return 0;
}
