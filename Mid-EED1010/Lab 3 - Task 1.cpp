#include <stdio.h>
#include <conio.h>

int main(){ /* function main begins program execution */
	
	char s1[]="Guests are given the red carpet treatment in Turkey"; /* create an array */
	int frequency; /* initialize counter for keeping the number of 're' */
	int i; /* initialize counter i */

	printf("The input string is '%s'\n",s1);
	
	for(i=0;i<100;i++){
		
		if(s1[i]=='r'){
			if(s1[i+1]=='e'){
				frequency+=1;
			} /* end if */
		} /* end if */
	} /* end for */
	
	printf("The string contains %d of 're' string",frequency);
	/* display the amount of 're' on the screen */
		
    getch();
    return 0; /* indicate that programme ended succesfully */
} /* end main function */
