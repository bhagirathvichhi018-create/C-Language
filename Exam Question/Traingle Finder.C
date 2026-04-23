#include<stdio.h>
#include<conio.h>
  main()
  {
  int a, b, c;

  clrscr();

  printf("Enter first angle\t:");
  scanf("%d", &a);
  printf("Enter second angle\t:");
  scanf("%d",&b);

  c = 180 - (a + b);

  printf("Enter third angle %d\t:",c);

  getch();




  }