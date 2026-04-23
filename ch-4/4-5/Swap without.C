#include<stdio.h>
#include<conio.h>
main()
{    int a, b;

     clrscr();

     printf("Enter A: ");
     scanf("%d", &a);
     printf("Enter B: ");
     scanf("%d", &b);

     a = a + b;
     b = a - b;
     a = a - b;
     printf("Swap : a = %d, b = %d", a, b);
      getch();
}


