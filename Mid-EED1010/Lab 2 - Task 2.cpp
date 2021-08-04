#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(){  /* function main begins program execution */ 
	
	char id[100], pwd[100]; /* create two arrays */
	int i; /* create a counter as an integer */
	int x; /* this is not a counter, it is just keeping a number */
	
	printf("Enter your student id: ");
	gets(id); /* read the id */
	
	printf("Enter your password: ");
	gets(pwd); /* read the password */
	
	for(i=0; id[i]!='\0';i++){
		if(isdigit(id[i])){
			continue;
		} /* end if */
		else{
			x=5;
			printf("Error, student id cannot include any letter or password cannot include and digit.");
		    break;
		} /* end else */
	} /* end for */
	
	for(i=0; pwd[i]!='\0';i++){
		if(isalpha(pwd[i])){
			continue;
		}
		else{
			if(x==5){ /* if error showed before do not show the error sentence again */
				break;
			}
			else{
				x=5;
			    printf("Error, student id cannot include any letter or password cannot include and digit.");
		        break;
			}
		}
	} /* end for */
	
	if(x!=5){ /* if error did not show then display the result */
		printf("-----Result-----\n");
		printf("Student Id = %s, Password = %s",id,pwd);
	}
	
	getch();
	return 0; /* indicate that programme ended succesfully */ 
} /* end main function */
