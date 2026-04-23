#include<stdio.h>
#include<conio.h>
 main()
 {
   float c, f ;

    clrscr();

   printf("Enter temperature in celsius\t:");
   scanf("%f", &c);

   f = (9.0 / 5.0 * c)+32;

   printf("Enter temperature\t: %.2f", f);

    getch();



 }
