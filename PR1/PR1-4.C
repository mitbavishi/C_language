#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();

 float basesalary = 100;

 float HRA = (10 * basesalary)/100;

 float DA = (5 * basesalary)/100;

 float TA = (8 * basesalary)/100;

 float grosssalary = basesalary + HRA + DA + TA;

 printf("%0f",grosssalary);

 getch();

}