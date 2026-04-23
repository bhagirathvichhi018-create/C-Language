#include<stdio.h>
#include<conio.h>
 main()
 {
  int x, y, ans;
  clrscr();
  printf("Enter x\t:");
  scanf("%d", &x);
  printf("Enter y\t:");
  scanf("%d", &y);
  ans = (x+y)*(x+y)*(x+y);
  printf("ans = %d",ans);
  getch();



 }