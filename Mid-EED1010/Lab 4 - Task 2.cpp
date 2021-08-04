#include <stdio.h>
#include <conio.h>

int main(){
	
	int a, b;
	printf("Enter two number,please. >>");
	scanf("%x%x",&a,&b);
	
	printf("Octal Form         = %o\n",a*b);
	printf("Decimal Form       = %u\n",a*b);
	printf("Hexadecimal Form   = %X\n",a*b);
	
	getch();
	return 0;
}
