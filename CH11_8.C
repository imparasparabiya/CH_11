#include<stdio.h>
#include<conio.h>

void main()

{
   int a=1,p,sum=0;
   clrscr();
   printf("Enter Value = ");
   scanf("%d",&p);

   do{
       sum=sum+a;
       a++;

     }while(a<=p);
     printf("sum = %d",sum);


  getch();
}