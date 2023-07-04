#include<stdio.h>
#include<conio.h>

void main()

{
  int a,b;
  clrscr();
  printf("Enter a Value = ");
  scanf("%d",&b);
  for(a=1;a<=b;a++)
     {
       if(a%2==1)
	 {
	  printf("Odd Number = %d\n",a);
	 }


     }

  getch();
}