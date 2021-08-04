#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(){  /* function main begins program execution */ 
	
	char sentence[100]; /* create char array */
	int i; /* initialize counter i */
	
	printf("Enter Sentence: ");
	gets(sentence); /* read the sentence */
	
	for(i=0; sentence[i] != '\0';i++){
		
		if(islower(sentence[i])){
			sentence[i] = toupper(sentence[i]);
		} else {
			sentence[i] = tolower(sentence[i]);
		}
	} /* end for */
	
	printf("Result is = %s", sentence); /* display the result on screen */
	
	getch();
	return 0; /* indicate that programme ended succesfully */ 
} /* end main function */
