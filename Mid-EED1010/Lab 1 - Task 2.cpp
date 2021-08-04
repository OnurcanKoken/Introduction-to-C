#include <stdio.h>
#include <conio.h>

void multiplation(int *aptr, int *bptr); /* function prototype */
int main()  /* function main begins program execution */ 
{
	int i, j; /* row and column counters */
	int A[2][2], B[2][2]; /*  create array A and B */

	printf("Input the elements of A matrix: ");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&A[i][j]); /* read the values of A matrix */
		} /* end for */
	} /* end for */
	
	printf("Input the elements of B matrix: ");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&B[i][j]); /* read the values of B matrix */
		} /* end for */
	} /* end for */
	
	multiplation(A[0], B[0]); /* multiplation of A and B matrices */
	
	getch();
	return 0; /* indicate that programme ended succesfully */ 
} /* end main function */ 
void multiplation(int *aPtr, int *bPtr) /* funtion to multiplation of two matrices */
{
	int i,j,k;
	int O[2][2]={0,0}; /* creat array O */
	
	printf("Output matrix O               : ");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
							
				O[i][j]=aPtr[k]*(bPtr[j])+aPtr[k+1]*(bPtr[j+2]);
				printf("%d ",O[i][j]); /* display the valurs of O matrix */
				
			} /* end for */
			k+=2; 
	    } /* end for */
} /* end multiplation function */ 
