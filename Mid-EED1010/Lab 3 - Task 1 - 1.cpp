#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){ /* function main begins program execution */
	
	char s1[]="rarara rerere gastara gastaracimbombom"; /* create an array */
	char *i; /* initialize pointer i */
	
	printf("The input string is '%s'\n",s1); /* display the string on screen */
	
	i=strstr(s1,"re"); /* find the number of 're' in the array */
	
	printf("The string contains %c of 're' string",i); /* display the result on screen */
		
    getch(); 
    return 0; /* indicate that programme ended succesfully */
} /* end main function */
