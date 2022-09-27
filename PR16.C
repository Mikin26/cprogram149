#include<stdio.h>
#include<conio.h>
void main()
{
int a=27,b=210,c=1230,d=111,man;
clrscr();
   (a>b)?(a>c)?(a>d)?printf("%d",a):printf("%d",c):printf("%d",d):
   (b>c)?(b>d)?printf("%d",b):printf("%d",c):
   (c>d)?printf("%d",c):printf("%d",d);

   getch();
}