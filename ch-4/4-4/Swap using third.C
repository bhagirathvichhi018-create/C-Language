#include<stdio.h>
#include<conio.h>
main()
{    int a, b, c ;

     clrscr();

     printf("Enter A: ");
     scanf("%d", &a);
     printf("Enter B: ");
     scanf("%d", &b);

     c = a;
     a = b;
     b = c;
     printf("Swap : a = %d, b = %d", a, b);
     getch();





}