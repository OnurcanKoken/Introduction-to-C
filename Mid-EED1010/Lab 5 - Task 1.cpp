#include <stdio.h>
#include <stdlib.h>

/* kisiler structure definiton */
struct kisiler{
	int seatNum;
	char name[20];
	char surname[20];
}; /* end structure kisiler */

int main(){
	
	struct kisiler kisi[25];
	int bus[25]={0};
	int x=1, y, i;
	
	printf("0 : Exit\n");
	printf("1 : Add new reservation\n");
	printf("2 : Delete available seats\n");
	printf("3 : Show available seats\n");
	printf("4 : Show reserved seats\n");
	
	while(x=!0){
		int i;
		printf("Please choose the number of the process you want to realize:");
		/* let the user enter a number */
	    scanf("%d",&x);
	    
	    if(x>4){
	    	printf("Error\n");
	    	continue;
		} /* end if error */
	    
		if(x==0){
		break;
	} /* end if and exit */
	else if(x==1){ /* Add new reservation */
		
		printf("----------Add new reservation----------\n");
		printf("Enter Seat number: ");
		scanf("%d",&i);
		printf("Enter Person name:");
		scanf("%s",kisi[i-1].name);
		printf("Enter Person surname:");
		scanf("%s",kisi[i-1].surname);
		
		kisi[i-1].seatNum=i; /* write the seat number on the seat */
		
		printf("--------------------------------\n");
		printf("Seat number %d is successfully reserved\n",i);
		printf("--------------------------------\n");
	} /* end if */
	else if(x==2){ /* Delete available seats */
		
		printf("Please enter seat which will be cancelled>");
		scanf("%d",&i);
		
		kisi[i-1].seatNum=0; /* make the seat number zero */
		
        printf("--------------------------------\n");
		printf("Your reservation is succesfully deleted.\n");
		printf("--------------------------------\n");
	} /* end if */
	else if(x==3){ /* Show available seats */
         
         for(y=0;y<25;y++){
                           
                           if(kisi[y].seatNum!=y+1){
                                           printf("%2d   %c\n",y+1,'A');
                                           } /* end if */
                           else{
                                printf("%2d   %s\n",y+1,"NA");
                                } /* end else */
                           
                           } /* end for */
         
	} /* end if */
	else if(x==4){ /* Show reserved seats */
         for(y=0;y<25;y++){
                           if(kisi[y].seatNum==y+1){
                                           printf("%2d   %c\n",y+1,'R');
                                           } /* end if */
                           else{
                                printf("%2d   %s\n",y+1,"NR");
                                } /* end else */
                           } /* end for */
	} /* end if */
		
	} /* end while */
	
	system("PAUSE");
	return 0; /* indicates successful termination */
} /* end main */
