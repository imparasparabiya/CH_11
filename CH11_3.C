#include<stdio.h>
#include<conio.h>

main()

{
    int a=1,p;
    clrscr();
    printf("Enter a Value = ");
    scanf("%d",&p);
    do{
	printf("%d\n",a);
	a++;

       }while(a<=p);

   getch();

}