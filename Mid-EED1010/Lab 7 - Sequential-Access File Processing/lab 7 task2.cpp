#include <stdio.h>

struct student
{
	double number;
	char name[50];
	char surname[50];
};
int main(){
	
	FILE *iptr,*optr;
	int i=0; int n=0;
	struct student stud[30];
	struct student tut[30];
	
	if((iptr=fopen("Input.dat","r"))==NULL){
		printf("File input could not be opened\n");
	}/* end if */
	else{
		
		if((optr=fopen("Output.dat","w"))==NULL){
			printf("File output could not be opened\n");
		}/* end if */
		printf("The content of the file before sorting is :\n");
		printf("The content of the file is :\n");
		printf("%-15s%-15s%-15s","Number","Name","Surname");
		printf("\n");
		
		while(!feof(iptr)){
			/* read from the file */
			fscanf(iptr,"%lf %s %s",&stud[i].number,stud[i].name,stud[i].surname); 
			/* print on the screen */
		    fprintf(stdout,"%-14.lf %-14s %-15s\n",stud[i].number,stud[i].name,stud[i].surname); 
		    i++; n++;
		    if(i==10){ break; }
		} /* end while */
		fclose(iptr);
	}/* end else */
	
    int j;
    for(i=0;i<10;i++){
    	for(j=0;j<9;j++){
    		if(stud[j].number>stud[j+1].number){
    			tut[j]=stud[j+1];
    			stud[j+1]=stud[j];
    			stud[j]=tut[j];
			}
		}
	} /* end for */
	
	for(i=0;i<10;i++){
		/* write to the file */
		fprintf(optr,"%lf %s %s\n",stud[i].number,stud[i].name,stud[i].surname);
	} /* end for */
	fclose(optr);
	
	printf("The content of the file after sorting is :\n");
	printf("The content of the file is :\n");
	printf("%-15s%-15s%-15s","Number","Name","Surname");
	printf("\n");
	
	if((optr=fopen("Output.dat","r"))==NULL){
		printf("File output could not be opened\n");
	} /* end if */
	else{
		for(i=0;i<n;i++){
			/* read from the file */
			fscanf(optr,"%lf %s %s",&stud[i].number,stud[i].name,stud[i].surname); 
			/* print on the screen */
		    fprintf(stdout,"%-14.lf %-14s %-15s\n",stud[i].number,stud[i].name,stud[i].surname); 
		} /* end for */
	} /* end else */
	fclose(optr);
	return 0;
} /* end main */
