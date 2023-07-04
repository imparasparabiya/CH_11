#include<stdio.h>
#include<conio.h>

void main()

{
  int a,b;
  clrscr();
  printf("Which Number Tabel = ");
  scanf("%d",&b);
  for(a=1;a<=b;a++)
     {
      printf(" %d x %d = %d\n",b,a,b*a);
     }

  getch();
}