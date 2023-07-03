#include<stdio.h>
#include<conio.h>

main()

{
   int s=1,p;
   clrscr();
   printf("Enter Value = ");
   scanf("%d",&p);
   s=p;
   do{
      printf("%d\n",s);
      s--;
     }while(s>0);


  getch();
}