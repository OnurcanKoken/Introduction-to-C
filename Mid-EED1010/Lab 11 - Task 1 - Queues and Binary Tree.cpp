#include <stdio.h>
#include <stdlib.h>

/* self-referential structure */
struct queueNode {
	int data; /* define data as an integer */ 
	struct queueNode *nextPtr; /* queueNode pointer */
};/* end structure queueNode */

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

/* function prototypes */
void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
int dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int value);
void instructions(void);

/* function main begins program execution */ 
int main(){
	QueueNodePtr headPtr = NULL;  /* initialize headPtr */ 
	QueueNodePtr tailPtr = NULL; /* initialize tailPtr */ 
	int choice, item, counter;
	
	instructions();/* display the menu */ 
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	
	 /* while user does not enter 4 */ 
	while(choice!=4){
		
		switch(choice){
			/* enqueue value */ 
			case 1:
				if(counter<4){
					printf("PLEASE ENTER A INTEGER NUMBER TO ADD QUEUE: ");
				    scanf("%d",&item);
				    enqueue(&headPtr, &tailPtr, item);
				    counter+=1;
				}/* end if */
				else{
					printf("\nQUEUE REACHED MAXIMUM VALUE !!\n");
				}/* end else */				
				break;
			/* dequeue value */
			case 2:
				if(!isEmpty(headPtr)){
		
					item=dequeue(&headPtr, &tailPtr);
					printf("%d DELETED\n",item);
					counter-=1;
					
					if(headPtr==NULL){
						printf("REMAINED ELEMENTS IN QUEUE\n"
						       "QUEUE IS EMPTY\n");
					}/* end if */
					else{
						printf("REMAINED ELEMENTS IN QUEUE\n");
					    printQueue(headPtr);
					}/* end else */
					
				}/* end if */
				else{
						printf("QUEUE IS EMPTY\n");
				}/* end else */
			    break;
			case 3:
				printQueue(headPtr);
				break;
			default:
				printf("Invalid choice.\n");
				break;
		}/* end switch */
		printf("\n");
		instructions();
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
	}/* end while */
	
	printf("\nEND OF RUN.");
	return 0;
}/* end main */

void instructions(void){
	printf("-------QUEUE MENU-------\n"
	       "<1> ADD VALUE TO QUEUE\n"
		   "<2> DELETE FIRST ELEMENT\n"
		   "<3> SHOW THE ELEMENTS\n"
		   "<4> CLOSE THE PROGRAMME\n");
}/* end function instructions */

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int value){
	QueueNodePtr newPtr; /* pointer to new node */ 
	
	newPtr = (struct queueNode*)malloc(sizeof(QueueNode));
	
	if(newPtr != NULL){
		newPtr->data=value;
		newPtr->nextPtr=NULL;
		
		if(isEmpty(*headPtr)){
			*headPtr=newPtr;
		}/* end if */
		else{
			(*tailPtr)->nextPtr=newPtr;
		}/* end else */
		*tailPtr=newPtr;
	}/* end if */
	else{
		printf("%d not inserted. No memory available.\n",value);
	}/* end else */
}/* end function enqueue */

int dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr){
	int value; /* node value */
	QueueNodePtr tempPtr; /* temporary node pointer */ 
	
	value=(*headPtr)->data;
	tempPtr = *headPtr;
	*headPtr = ( *headPtr )->nextPtr;
	
	if(*headPtr==NULL){
		*tailPtr = NULL;
	}/* end if */
	
	free(tempPtr);
	return value;	
}/* end function dequeue */

int isEmpty(QueueNodePtr headPtr){
	return headPtr == NULL;
}/* end function isEmpty */

/* Print the queue */
void printQueue( QueueNodePtr currentPtr ){
	
	if(currentPtr==NULL){
		printf("QUEUE IS EMPTY.\n");
	}/* end if */
	else{
		printf("QUEUE HAS ELEMENTS:\n");
		
		while(currentPtr!=NULL){
			printf("%d\n",currentPtr->data);
			currentPtr=currentPtr->nextPtr;
		}/* end while */
	}/* end else */
}/* end function printQueue */
