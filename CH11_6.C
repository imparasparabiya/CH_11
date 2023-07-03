#include<stdio.h>
#include<conio.h>

main()
{
  int s=1,p;
  clrscr();
  printf("Enter Value = ");
  scanf("%d",&p);
    do{
	if(s%2==1)
	{
	  printf("%d\n",s);
	}


	s++;
       }while(s<=p);
  getch();
}