#include<stdio.h>
#include<conio.h>

 main()
{
    float r, perimeter;

    clrscr();

    printf("Enter radius: ");
    scanf("%f", &r);

    perimeter = 2 * 3.14 * r;

    printf("Perimeter of circle = %f", perimeter);

    getch();
}
