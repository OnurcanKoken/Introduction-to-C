#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* self-referential structure */
struct stackNode {
 char data; /* each stackNode contains a char */
 struct stackNode *nextPtr; /* pointer to next node */
}; /* end structure stackNode */

typedef struct stackNode StackNode; /* synonym for struct stackNode */
typedef StackNode *StackNodePtr; /* synonym for stackNode* */

/* prototype */
void push( StackNodePtr *topPtr, char value );

int main(){
	StackNodePtr stackPtr = NULL; /* initially there are no nodes */
	char string1[20], string2[20]; int i,j;
	
	printf("Enter a text :"); /* let the user enter a text */
	gets(string1);
	
	/* assign the values of string1 to the stack */
	while(string1[i]!=NULL){
		push(&stackPtr,string1[i]);		
		i++;
	}/* end while */
	i=0;
	
	printf("\nThe text is :");
	printf("%s",string1);/* display string1 */

	while(stackPtr!=NULL){
		string2[i] = stackPtr->data;
		stackPtr = stackPtr->nextPtr;
		i++;
	}/* end while */
	if(i==8){
			string2[i]='\0'; /* assign null to end of string2 */
		}/* end if */

	printf("\nThe reverse of the text is :");
	printf("%s",string2); /* display string2 */
	
	i=0; j=strlen(string2); /* find the number of data in the string */

    /* check if the text is polindrome or not */
	while(i<j){
		if(string1[i]==string2[i]){
			i++;
		}/* end if */
		else{
			printf("\nThe text is not polindrome.");
			i=0; /* make counter zero */
			break;
		}/* end else */
	}/* end while */
	if(i!=0){
		printf("\nThe text is a polindrome.");
	}/* end if */
	return 0;
}/* end function main */

void push( StackNodePtr *topPtr, char value ){
	StackNodePtr newPtr; /* pointer to new node */
	newPtr = (stackNode *)malloc(sizeof( StackNode ));
	
	/* insert the node at stack top */
	if( newPtr != NULL ){
		newPtr->data = value;
		newPtr->nextPtr = *topPtr;
		*topPtr = newPtr;
	}/* end if */
	else{ /* no space available */
	printf("%d not inserted. No memory available.\n",value);
	}/* end else */
}/* end function push */
