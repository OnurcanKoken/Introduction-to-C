/*
    Name : Onurcan KÖKEN
    Student ID : 2015502053
    Date : 02.11.16 22:10
    Description : EED 1005 Preliminary Work #4
*/

#include <stdio.h>
#include <conio.h>

int main(void)

{
	int grade;
	
	printf("Enter your grade:");
	// let the user enter a grade
	scanf("%d",&grade);
	
	switch(grade/5) {
		case 0: 
		    printf("FF");
			break;
		case 1: 
		    printf("FF");
			break;
		case 2: 
		    printf("FF");
			break;
		case 3: 
		    printf("FF");
			break;
		case 4: 
		    printf("FF");
			break;
		case 5: 
		    printf("FF");
			break;
		case 6: 
		    printf("FF");
			break;
		case 7: 
		    printf("FF");
			break;
		case 8: 
		    printf("FF");
			break;
		case 9: 
		    printf("FF");
			break;
		case 10: 
		    printf("FF");
			break;
		case 11: 
		    printf("FD");
			break;
		case 12: 
		    printf("DD");
			break;
		case 13: 
		    printf("DC");
			break;
		case 14: 
		    printf("CC");
			break;
		case 15: 
		    printf("CB");
			break;
		case 16: 
		    printf("BB");
			break;
		case 17: 
		    printf("BA");
			break;
		case 18:
		    printf("AA");
			break;
		case 19: 
		    printf("AA");
			break;
		case 20: 
		    printf("AA");
			break;
		default: 
		    printf("Please enter a value between [0,100] ");
		
	}
	
	getch();
	return 0; // indicate program ended successfully
} // end function main

