#include<stdio.h>
#include<conio.h>
main()
{
 int a;
 int b;
 int c;

 clrscr();

 c = a;
 a = b;
 b = c;

 printf("Enter the value of a : ");
 scanf("%d",&a);

 printf("Enter the value of b : ");
 scanf("%d",&b);

 getch();
}