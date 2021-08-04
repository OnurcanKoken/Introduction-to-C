#include <stdio.h>
#include <stdlib.h>

struct stackNode {
 int data;
 struct stackNode *nextPtr;
};
typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push( StackNodePtr *topPtr, int value );
int pop( StackNodePtr *topPtr );
void printStack( StackNodePtr topPtr );

void push( StackNodePtr *topPtr, int value ){
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

int pop( StackNodePtr *topPtr ){
	StackNodePtr tempPtr; /* temporary node pointer */
	int popValue; /* node value */
	
	tempPtr = *topPtr;
	popValue = ( *topPtr )->data;
	*topPtr = ( *topPtr )->nextPtr;
	free(tempPtr);
	return popValue;
}/* end function pop */

void printStack( StackNodePtr currentPtr ){
	/* if stack is empty */
	if( currentPtr ==NULL ){
		printf("The stack is empty.\n");
	}/* end if */
	else{
		printf("The stack is:\n");
		
		/* while not the end of the stack */
		while(currentPtr != NULL){
			printf("%d--> ",currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}/* end while */
	}/* end else */
}/* end function printStack */
