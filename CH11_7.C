#include<stdio.h>
#include<conio.h>

void main()

{
   int a=2000,b=3000;
   clrscr();

   do{
	if(a%4==0)
	{
	  printf("%d\t",a);
	}
	a++;
     }while(a<=b);


  getch();
}