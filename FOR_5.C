#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b;
  clrscr();
  printf("Enter Value = ");
  scanf("%d",&b);
  for(a=1;a<=b;a++)
  {
     if(a%2==0)
     {
      printf("Even nomuber = %d\n",a);
     }

  }
  getch();

}