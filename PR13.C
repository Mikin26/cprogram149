#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the number to check weather it is max or not:");
scanf("%d",&a);
printf("enter the number to check weather it is max or not:");
scanf("%d",&b);
printf("enter the number to check weather it is max or not:");
scanf("%d",&c);
if(a>b && a>c)
{
printf("%d is the max number",a);
}
else if (b>c)
{
printf("%d is the max number",b);
}
else
{
printf("%d is the max number",c);
}
getch();
}