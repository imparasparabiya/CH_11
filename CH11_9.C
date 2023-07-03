#include<stdio.h>
#include<conio.h>

void main()

{
   int a=1,p,f=1;
   clrscr();
   printf("Enter a Value = ");
   scanf("%d",&p);
   do{
       f=f*a;
       a++;


     }while(a<=p);
     printf(" F = %d",f);

  getch();
}