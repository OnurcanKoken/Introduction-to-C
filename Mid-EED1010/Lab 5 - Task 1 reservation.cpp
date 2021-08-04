#include <stdio.h>
#include <stdlib.h>

struct kisi {
	char seatNum[25];
	char name[];
	char surname[];
};

int main(){
	
	int x=1;
	int y;
	
	struct kisi bus;
	struct kisi *ptr;
	
	printf("0 : Exit\n");
	printf("1 : Add new reservation\n");
	printf("2 : Delete available seats\n");
	printf("3 : Show available seats\n");
	printf("4 : Show reserved seats\n");
	
	
	while(x=!0){
		
		printf("Please choose the number of the process you want to realize:");
	    scanf("%d",&x);
	    
	    if(x>4){
	    	printf("Error\n");
	    	continue;
		}
	    
		if(x==0){
		break;
	}
	else if(x==1){
		
		printf("----------Add new reservation----------\n");
		printf("Enter Seat number: ");
		scanf("%s",bus.seatNum);
		printf("Enter Person name:");
		scanf("%s",ptr->name);
		printf("Enter Person surname:");
		scanf("%s",ptr->surname);
		
		printf("--------------------------------\n");
		printf("Seat number %s is successfully reserved\n",ptr->seatNum);
		printf("--------------------------------\n");
	}
	else if(x==2){
		
		printf("Please enter seat which will be cancelled>");
		scanf("%d",&y);
		bus.seatNum[y-1]==0;
		printf("--------------------------------\n");
		printf("Your reservation is succesfully deleted.\n");
		printf("--------------------------------\n");
	}
	else if(x==3){
	}
	else if(x==4){
	}
		
	}
	
	system("PAUSE");
	return 0;
}
