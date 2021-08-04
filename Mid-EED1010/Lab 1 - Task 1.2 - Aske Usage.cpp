#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(){
	
	char stnc[500], c;
	int i;
	
	printf("Enter Sentence: ");
	gets(stnc);
	
	while(stnc[i]!='\0'){
		
		c = stnc[i];
		
		if(c >= 'A' && c <= 'Z'){
			stnc[i]=stnc[i]+32;
		}
		else if(c >= 'a' && c <= 'z'){
			stnc[i]=stnc[i]-32;
		}
		i++;
	}	
	
	printf("%s",stnc);
	
	getch();
	return 0;
}
