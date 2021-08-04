#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* self-referential structure */
struct listNode{
	int data; /* each listNode contains an integer */
	struct listNode *nextPtr; /* pointer to next node */
}; /* end structure listNode */

typedef struct listNode ListNode; /* synonym for struct listNode */
typedef ListNode *ListNodePtr; /* synonym for ListNode* */

/* prototypes */
void insert(ListNodePtr *sPtr,int value);
void printList( ListNodePtr currentPtr );


int main(){
	
	ListNodePtr startPtr = NULL; /* initially there are no nodes */
	int value; int i; int values[20]; double sum; double avg;
	
	srand(time(NULL));
	for(i=0;i<=19;i++){
		value=rand()%100;
		values[i]=value;
		insert( &startPtr, value ); /* call function insert */
	}
	
	printList(startPtr); /* call function printList */
	
	for(i=0;i<=19;i++){
		sum=sum+values[i];
	}
	printf("\n\nsum of the integers: %.f",sum);
	avg=sum/20;
	printf("\n\naverage of the integers: %.2f",avg);
	
	return 0;
}/* end main */

void insert(ListNodePtr *sPtr,int value){	
	
	ListNodePtr newPtr; /* pointer to new node */
	ListNodePtr previousPtr; /* pointer to previous node in list */
	ListNodePtr currentPtr; /* pointer to current node in list */
		
	newPtr = (struct listNode*)malloc( sizeof( listNode ) );

	if ( newPtr != NULL ) { /* is space available */
		newPtr->data = value; /* place value in node */
		newPtr->nextPtr = NULL; /* node does not link to another node */

		previousPtr = NULL;
		currentPtr = *sPtr;

		/* loop to find the correct location in the list */
		while ( currentPtr != NULL && value > currentPtr->data ) {
 		    previousPtr = currentPtr; /* walk to ... */
 		    currentPtr = currentPtr->nextPtr; /* ... next node */
		} /* end while */ 

 		/* insert new node at beginning of list */
		if ( previousPtr == NULL ) {
		    newPtr->nextPtr = *sPtr;
		    *sPtr = newPtr;
		} /* end if */
		else { /* insert new node between previousPtr and currentPtr */
		    previousPtr->nextPtr = newPtr;
		    newPtr->nextPtr = currentPtr;
		} /* end else */
		} /* end if */
		else {
		     printf( "%c not inserted. No memory available.\n", value );
		} /* end else */
	
}/* end insert */
void printList( ListNodePtr currentPtr )
{
    /* if list is empty */
    if ( currentPtr == NULL ) {
    printf( "\nList is empty.\n\n" );
} /* end if */
    else {
	printf("The list with 20 random integers:\n");		
    /* while not the end of the list */
    while ( currentPtr != NULL ) {
    printf( " %d", currentPtr->data );
    currentPtr = currentPtr->nextPtr;
} /* end while */
} /* end else */
} /* end function printList */
