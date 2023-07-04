#include<stdio.h>
#include<conio.h>

void main()

{
  int a,b,f=1;
  clrscr();
  printf("Enter Value = ");
  scanf("%d",&b);
  for(a=1;a<=b;a++)
    {
     f=f*a;
    }
    printf("Fectorial = %d",f);

  getch();
}