#include<stdio.h>
#include<conio.h>

void main()

{
  int a,b,sum=0;
  clrscr();
  printf("Enter a Value = ");
  scanf("%d",&b);
  for(a=1;a<=b;a++)
     {
      sum=sum+a;

     }
     printf(" Sum = %d",sum);

  getch();
}