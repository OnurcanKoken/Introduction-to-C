#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int random(int x[],int n);
int random_a(int n);
int main(void)
{
	
	int n,i;
	n=random_a(n);
	srand(time(NULL));
	int x[n];
	x[n]=random(x,n);
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		printf("%d  ",x[i]);
	}
	getch();
	return 0;
}
int random(int x[],int n)
{
	int *p;
	int i;
	int k;
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		x[i]=rand()%10;
		if(i>0){
			for(k=0;k<i;k++){
				if(x[k]==x[i]){
					i--;
				}
			}
		}
	}
	
	p=&x[n];
	return *p;
}
int random_a(int n)
{
	srand(time(NULL));
	n=rand()%10;
	if(n<=2){
		n+=4;
	}
	return n;
}

