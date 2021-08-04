#include <stdio.h>
#include <conio.h>

/* enumeration constants represent months of the year */
enum months {
	JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC 
};
/* enumeration constants represent seasons */
enum seasons {
	SPR=1, SUM, AUT, WIN
};

int main(){
	enum months month;
	enum seasons season;
	int i=JAN, c, j=3;
	/* initialize array of pointers */
	const char *monthName[]={"","January","February","March",
	"April", "May","June","July","August","September","October",
	"November","December"};
	/* initialize array of pointers */
	const char *seasonName[]={"Spring","Summer","Autumn","Winter"};
	
	printf("No");
	printf("%12s","Mounth");
	printf("%10s\n","Season");
	
	while(i<=DEC){
                  if(j>3){ j=0; }
                  
	switch (i){
           
		
		case JAN : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
				   break;
		case FEB : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
		           j++;
				   break;
		case MAR : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
				   break;
		case APR : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
				   break;
		case MAY : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
		           j++;
				   break;
		case JUN : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
				   break;
		case JUL : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
				   break;
		case AUG : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
		           j++;
				   break;
		case SEP : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
				   break;
		case OCT : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
				   break;
		case NOV : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
		           j++;
				   break;
		case DEC : printf("%2d%12s%10s\n",i,monthName[i],seasonName[j]);
		           i++;
				   break;
			
    	}
    }
    getch();	    
    return 0;/* indicates successful termination */
} /* end main */
