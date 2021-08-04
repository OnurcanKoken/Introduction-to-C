#include <stdio.h>

void power2(); /* function prototype */
int main(){
	power2(); 
	return 0;
} /* end main */
void power2(){
	
	unsigned number,result,c,displayMask;
	int pow;
	
	printf("Enter the number and pow :");
	/* let the user enter the number and row */
	scanf("%u%d",&number,&pow);
	result=number<<pow; /* calculate the result */
	printf("Result = %u\n",result);
	
	displayMask = 1 << 31 ;
	for(c=1;c<=32;c++){
		putchar(result & displayMask ? '1' : '0');
		result <<=1; /* shift result left by 1 */
		if(c%8==0){ /* output a space after 8 bits */
			putchar(' ');
		} /* end if */	
	} /* end for */
	putchar('\n');
} /* end function power2 */
