#include <stdio.h>
#include <conio.h>

int main()

{
    double km;
    double kg;
    double c;
    double miles;
    double pounds;
    double f;
    
       printf("Please enter the distance in km:");
       scanf("%lf",&km);
       
       printf("Please enter the weight in kg:");
       scanf("%lf",&kg);
       
       printf("Please enter the temperature in celcius:");
       scanf("%lf",&c);
       
       miles=km*0.6214; /* calculatiing miles */      
       pounds=kg*2.205; /* calculating pounds */
       f=(c*9/5)+32; /* calculating fahrenheits */
       
       printf("%.2f km is equal to %.2f miles\n",km,miles);
           /* displaying miles */
       
       printf("%.2f kg is equal to %.2f pounds\n",kg,pounds);
           /* displaying pounds */
       
       printf("%.2f celcius is equal to %.2f fahrenheits\n",c,f);
           /* displaying fahrenheits */
       
    getch();
    return 0; /* indicate that programme ended successfully */
    
} /* end function main */
