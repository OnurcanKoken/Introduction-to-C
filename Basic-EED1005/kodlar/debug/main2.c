#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
 int exp, base;
 int product, i;
 product = 1;
 printf ("Enter integer base and exponent: ");
 scanf ("%d%d", &base, &exp);
 for (i = 1; i <= exp; i++ )
 {
 product *= base;
 }

 printf ("%d to the power %d is: %d\n", base, exp, product);
 system("PAUSE");
 return 0;
}
