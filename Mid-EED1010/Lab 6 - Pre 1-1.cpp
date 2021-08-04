#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

    int main(){
	long number;
	printf("Enter an integer \n");
	scanf("%ld",&number);
	number = number >> 2;
	printf("%ld",number);}

    int max_bit(int num);
    int main(){
    	int x,m;
    	printf("enter :\n");
    	scanf("%d",&x);
    	m=max_bit(x);
    	printf("%d",m);
    	return 0;
	}
	int max_bit(int num){
	int count = 0;
	while (num>>1!=0)
	{
	count++;
	num = num-1;}
	return(count);
}

enum days{Mon=1,Tue,Wed,Thu,Fri,Sat,Sun};
int main()
{
enum days day;
int i;
const char* dayName[]={"","Monday","Tuesday","Wednesday",
"Thursday","Friday","Saturday","Sunday"};
for(i=Mon;i<=Sun;i++)
printf("%2d%11s\n",i,dayName[i]);
return 0;
}
