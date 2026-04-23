#include<stdio.h>
#include<conio.h>
 main()
 {
  float base, hra, da, ta, gross;

  clrscr();

  printf("Enter Base salary\t:");
  scanf("%f", &base);
  printf("Enter HRA salary\t:");
  scanf("%f",&hra);
  printf("Enter DA salary\t:");
  scanf("%f", &da);
  printf("Enter TA salary\t:");
  scanf("%f", &ta); 

  gross = base + (base * hra / 100)+(base * da / 100)+(base * ta / 100);

  printf("\nGross salary = Rs %.2f", gross );

  getch();




 }