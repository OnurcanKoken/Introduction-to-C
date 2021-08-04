#include <stdio.h>
#include <conio.h>

int main(){ /* function main begins program execution */ 
	
	char message[100]; /* create char array */
	
	int i; /* initialize counter i */
	
	printf("Decoded message: ");
	gets(message); /* read the message */
	
	while(message[i]!='\0'){
		if(message[i]==' '){
			i++;
		} /* end if */
		message[i]+=2;
		i++;
	} /* end while */
	
    printf("Encoded message: %s",message);
    
	getch();
	return 0; /* indicate that programme ended succesfully */ 
} /* end main function */ 
