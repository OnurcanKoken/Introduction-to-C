#include <stdio.h>
#include <conio.h>

void printBit(unsigned value); /* function prototype */
void reverseBit(unsigned value); /* function prototype */
int main(){
	int x;
	printf("please give an integer:");
	scanf("%d",&x);
	printf("%7d = ",x);
	printBit(x);
	printf("reverse of this integer:\n");
	reverseBit(x);
	getch();
	return 0; /* indicates successful termination */
} /* end main */
void printBit(unsigned value){
	unsigned c, displayMask;
	displayMask = 1 << 31 ;
	for(c=1;c<=32;c++){
		putchar(value & displayMask ? '1' : '0');
		value<<=1; 
		if(c%8==0){ 
			putchar(' ');
		} /* end if */ 
	} /* end for */ 
	putchar('\n');
} /* end printBit */
void reverseBit(unsigned value)
{    
    unsigned reverse = 0, i;
    for (i = 0; i < 32; i++)
    {
        if(value & (1 << i)){
              reverse = reverse | (1 << (31 - i));
              } /* end if */
            
    } /* end for */
    printf("%u = ",reverse);
    printBit(reverse);
} /* end reverseBit */
