#include <stdio.h>
#include <conio.h>

int main()
{
    int i, t1, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    
	   for (i = 1; i <= 21; ++i){
        if(i == 1){
            printf("%d, ", t1);
            continue;
        } /* end if */
		if(i == 2) {
            printf("%d, ", t2);
            continue;
        }/* end if */
           nextTerm = t1 + t2;
           t1 = t2;
           t2 = nextTerm;
           printf("%d, ", nextTerm);
    }/* end for */
    getch();
    return 0;
}/* end main function */
