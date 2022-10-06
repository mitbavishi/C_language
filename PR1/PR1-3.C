#include<stdio.h>
#include<conio.h>
main(){

 clrscr();

 float celcius,fahreinheit;

 printf("Enter temperature in celcius : ");
 scanf("%f",&celcius);

 fahreinheit = (celcius * 9/5)+32;
 printf("%.2f celcius = %.2f fahreinheit",celcius,fahreinheit);

 getch();

}
