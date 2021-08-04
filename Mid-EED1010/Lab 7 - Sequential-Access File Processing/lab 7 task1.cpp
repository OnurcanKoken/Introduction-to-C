#include <stdio.h>

struct customer
{
	int account;
	char name[50];
	double balance;
};

int main(){
	FILE *fptr;
	int i=0; int m=0;
	struct customer cust[30];
	
	if((fptr=fopen("customer.txt","w"))==NULL){
		printf("File could not be opened\n");
	}/* end if */
	else{
		printf("Enter your account number, name and balance\n");
		printf("Enter EOF to quit\n");
        
        while(!feof(stdin)){
			printf("=> ");
			/* read from keyboard */
			fscanf(stdin,"%d %s %lf",&cust[i].account,cust[i].name,&cust[i].balance); 
			/* write to the file */
		    fprintf(fptr,"%d %s %lf\n",cust[i].account,cust[i].name,cust[i].balance); 
			i++; m++;
		}
		fclose(fptr);
	}
	
	if((fptr=fopen("customer.txt","r"))==NULL){
		printf("File could not be opened\n");
	}/* end if */
	else{
		printf("\n");
		printf("The content of the file is :\n");
		printf("%-15s%-14s%-10s","AccountNum","Name","Balance");
		printf("\n");
		for(i=0;i<(m-1);i++){
			fscanf(fptr,"%d %s %lf",&cust[i].account,cust[i].name,&cust[i].balance); 
			/* read from the file */
		    fprintf(stdout,"%-14d %-13s %-9.2lf\n",cust[i].account,cust[i].name,cust[i].balance); 
			/* print on the screen */
		}
		fclose(fptr);
	}
	return 0;
}
