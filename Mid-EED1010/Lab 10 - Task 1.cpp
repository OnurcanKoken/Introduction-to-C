#include <stdio.h>
#include <stdlib.h>

/* self-referential structure */
struct stackNode {
 int data; /* each stackNode contains an integer */
 struct stackNode *nextPtr; /* pointer to next node */
}; /* end structure stackNode */

typedef struct stackNode StackNode; /* synonym for struct stackNode */
typedef StackNode *StackNodePtr; /* synonym for stackNode* */

/* prototypes */
void push( StackNodePtr *topPtr, int value );
int pop( StackNodePtr *topPtr );
void printStack( StackNodePtr topPtr );
void instructions( void );

int main(){
	StackNodePtr stackPtr = NULL; /* initially there are no nodes */
	int choice; int value;
	
	/* let the user enter a choice */
	instructions();
	printf("=> ");
	scanf("%d",&choice);
	
	while(choice!=4){
		if(choice==1){
			/* let the user enter a value */
			printf("Enter the data to be placed on: ");
			scanf("%d",&value);
			push(&stackPtr, value); /* assign the value into the stack */
			printStack( stackPtr ); /* display the stack */
		}
		else if(choice==2){
			
			if(stackPtr==NULL){
				printf("List is empty\n");
			}/* end if */
			else{
			/* display the value which one is deleted */
			printf("%d is popped off.\n",pop(&stackPtr));
			printStack( stackPtr ); /* display the stack */
			}/* end else */
		}/* end else */
		else if(choice==3){
			printStack( stackPtr ); /* display the stack */
		}/* end else */
		else{
			printf("\nInvalid choice.\n");
			instructions();
		}/* end else */
		/* let the user enter a choice */
		printf("\n=> ");
		scanf("%d",&choice);
	}/* end while */
	printf("\nEnd of run.");
}/* end main */

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
		printf("The stack in tabular format is :\n"
		       "%-20s%-20s%-20s","AdressOfTheNode","StackValue<Data>",
			   "AddressOfNextNode");
			   printf("\n");
		
		while(currentPtr != NULL){
			printf("%-20p%-20d%-20p\n",&currentPtr,currentPtr->data,&currentPtr->nextPtr);
			currentPtr = currentPtr->nextPtr;
		}/* end while */
	}/* end else */
}/* end function printStack */

void instructions( void ){
	printf("Enter your choice\n"
	       "1 to place data on the stack.\n"
		   "2 to place data off the stack.\n"
		   "3 to display the stack with address.\n"
		   "4 to quit.\n\n");
}/* end function instructions */
