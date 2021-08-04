#include <stdio.h>
#include <conio.h>

int main(){
	
	int a=200;
	printf("a = %d\n",a);
	printf("a = %+d\n",a);
	printf("a = %p",&a);
	
	
	printf("%#x",100);
	
	
	printf("Enter an array: ");
	scanf("%[^p]",s);
	
	printf("%09.3f",1.23456);
	
	printf("Enter a time of the form hh:mm:ss : ");
	scanf("%d%*c%d%*c%d",&hour,&minute,&second);
	
	getch();
	return 0;
}
