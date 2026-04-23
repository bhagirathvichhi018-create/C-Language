#include<stdio.h>
#include<conio.h>

 main()
{
    float p, r, n, si;

    clrscr();

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &n);

    si = (p * r * n) / 100;

    printf("Simple Interest = %f", si);

    getch();
}
