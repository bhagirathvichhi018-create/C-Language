#include<stdio.h>
#include<conio.h>

 main()
{
    int a=12, b=6;

    clrscr();

    printf("\nAddition of %d and %d is %d", a, b, a+b);
    printf("\nSubtraction of %d and %d is %d", a, b, a-b);
    printf("\nMultiplication of %d and %d is %d", a, b, a*b);
    printf("\nDivision of %d and %d is %d", a, b, a/b);
    printf("\nModulo of %d and %d is %d", a, b, a%b);

    printf("\n\n%d + %d = %d", a, b, a+b);
    printf("\n%d - %d = %d", a, b, a-b);
    printf("\n%d * %d = %d", a, b, a*b);
    printf("\n%d / %d = %d", a, b, a/b);
    printf("\n%d %% %d = %d", a, b, a%b);

    getch();
}
