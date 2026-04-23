#include<stdio.h>
#include<conio.h>

 main()
{
    float l, area;

    clrscr();

    printf("Enter length: ");
    scanf("%f", &l);

    area = l * l;

    printf("Area of square = %f", area);

    getch();
}
