#include <stdio.h>

/* seatdata structure definition */
struct seatdata{
	int seatNum;
	char name[15];
	char surname[15];
	char gender[1]; }; /* end structure seatdata */
	
int enterChoice(void); /* function prototype */
void textFile(FILE *seatsPtr); 
void updateReservation(FILE *fPtr); 
void newReservation(FILE *fPtr); 
void deleteReservation(FILE *fPtr); 

int main(){
	
	int x; /* user's choice */
	
	FILE *fPtr; /* random access file pointer */
	
	if((fPtr=fopen("bus.dat","rb+"))==NULL){
		printf("File could not be opened.\n");
	}
	else{
		
		while((x=enterChoice())!=5){
		
	    if(x==1){
	   textFile(fPtr);
	}/* end if 1*/
	else if(x==2){
		updateReservation(fPtr);
	}/* end if 2*/
	else if(x==3){
		newReservation(fPtr);
	}/* end if 3*/
	else if(x==4){
		deleteReservation(fPtr);
	}/* end if 4*/
	else{
		printf("Error\n");
		break;
	}/* end else */
	
	    }/* end while */
	
	}/* end else */
	
	fclose(fPtr);
	
	return 0;
}/* end main */

int enterChoice(){
	
	int x;
	
	printf("Enter your choice\n");
	printf("1- store a formatted text file of ");
	printf("seats reserved called seats.txt for printing\n");
	printf("2- update a reservation\n");
	printf("3- add a new reservation\n");
	printf("4- delete a reservation\n");
	printf("5- end program\n");
	printf("?");
	scanf("%d",&x);
	
	return x;
}/* end enterChoice */

void textFile(FILE *seatsPtr){
	
	FILE *writePtr; /* sequantial access file pointer */
	
	struct seatdata seat = { 0, "", "", "" };
	
	if((writePtr=fopen("seats.txt","w"))==NULL){
		printf("File could not be opened.\n");
	}
	else{
		rewind(seatsPtr); /* resetting the file position pointer */
		fprintf(writePtr,"%-7s%-15s%-15s%-6s\n",
		"No","Name","Surname","Gender");
		
		/* copy all informations from random access file into text file */
		while(!feof(seatsPtr)){
			fread(&seat,sizeof(struct seatdata),1,seatsPtr);
			
			if(seat.seatNum!=0){
				fprintf(writePtr,"%-7d%-15s%-15s%-6s\n",
				seat.seatNum,seat.name,seat.surname,seat.gender);
			}
		} /* end while */
		fclose(writePtr);
		
	} /* end else */
}/* end textFile */

void updateReservation(FILE *fPtr){
	
	int seat_num;
	struct seatdata seat = {0,"","",""};
	
	printf("Enter seat number to update: ");
	scanf("%d",&seat_num);
	
	fseek(fPtr,(seat_num-1)*sizeof(struct seatdata),SEEK_SET);
	
	fread(&seat,sizeof(struct seatdata),1,fPtr);
	
	if(seat.seatNum==0){
		printf("Seat %d is empty\n",seat_num);
	}/* end if */
	else{
		
		printf("%-7d%-15s%-15s%-6s\n",seat.seatNum,seat.name,seat.surname,seat.gender);
		
		printf("Enter name, surname and gender informations: ");
		scanf("%s%s%s",seat.name,seat.surname,seat.gender);
		
		printf("%-7d%-15s%-15s%-6s\n",seat.seatNum,seat.name,seat.surname,seat.gender);
		
		fseek(fPtr,(seat_num-1)*sizeof(struct seatdata),SEEK_SET);
		
		fwrite(&seat,sizeof(struct seatdata),1,fPtr);
	}/* end else */
	
}/* end updateReservation */

void newReservation(FILE *fPtr){
	
	struct seatdata seat = {0,"","",""};
	
	int seat_num;
	
	printf("Enter new seat number to reserve:");
	scanf("%d",&seat_num);
	
	fseek(fPtr,(seat_num-1)*sizeof(struct seatdata), SEEK_SET);
	
	fread(&seat,sizeof(struct seatdata),1,fPtr);
	
	if(seat.seatNum!=0){
		printf("Seat %d already reserved.\n",seat.seatNum);
	}
	else{
		printf("Enter name, surname and gender : ");
		scanf("%s%s%s",seat.name,seat.surname,seat.gender);
		
		seat.seatNum = seat_num;
	
	    fseek(fPtr,(seat.seatNum-1)*sizeof(struct seatdata),SEEK_SET);
	
    	fwrite(&seat, sizeof(struct seatdata),1,fPtr);
	}/* end else */
}/* end newReservation */

void deleteReservation(FILE *fPtr){
	
	struct seatdata seat;
	struct seatdata blank = {0,"","",""};
	
	int seat_num;
	
	printf("Enter seat number to delete:");
	scanf("%d",&seat_num);
	
	fseek(fPtr,(seat_num-1)*sizeof(struct seatdata), SEEK_SET);
	
	fread(&seat,sizeof(struct seatdata),1,fPtr);
	
	if(seat.seatNum==0){
		printf("Seat %d does not exist.\n",seat_num);
	}/* end if */
	else{
		fseek(fPtr,(seat_num-1)*sizeof(struct seatdata), SEEK_SET);
		
		fwrite(&blank,sizeof(struct seatdata),1,fPtr);
	}/* end else */
	
}/* end deleteReservation */
