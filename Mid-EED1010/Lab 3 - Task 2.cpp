#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){ /* function main begins program execution */
	
	char name[50], surname[50], number[50]; 
	char result[50]={0}; /* create four arrays */
	
	printf("Please enter your name:"); /* let the user enter name */
	gets(name);/* read the name */
	
	printf("Please enter your surname:"); /* let the user enter surname */
	gets(surname);/* read the surname */
	
	printf("Please enter your number:"); /* let the user enter number */
	gets(number); /* read the number */
	
	strncat(result,name,1); /* copy one element from name to result */
	strncat(result,surname,2); /* copy two elements from surname to result's end */
	
	int x = strlen(number); /* find the length of number */
	x-=3;
	
	strncat(result,&number[x],3); /* copt last three elements from number to result */
	
	printf("---result---\n");
	printf("User ID = %s",result); /* display the result */
	
	getch();
	return 0; /* indicate that programme ended succesfully */
} /* end main function */
