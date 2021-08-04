    /*
    Name: Onurcan KÖKEN
    Student Number: 2015502053
    Date: 08.10.2016 13:50
    Description: EED1005 Laboratory Work #1
    */
    
    
#include <stdio.h>
#include <conio.h>

int main()

{
     float midterm1;
     float midterm2;
     float final;
     double average;
     
        printf("Input first midterm exam grade:");
        scanf("%f",&midterm1);
     
        printf("Input second midterm exam grade:");
        scanf("%f",&midterm2);
     
        printf("Input final exam grade:");
        scanf("%f",&final);
     
        average=(midterm1/5)+(midterm2/5)+(6*final/10);
            /* calculating the average */
     
        printf("Student's average grade is:%.0f",average);
            /* displaying the average on screen */
        
     getch();
     return 0; /* indicate that programme ended successfully */
     
} /* end function main */
