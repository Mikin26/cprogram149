#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("enter the number to check weather it is max or not:");
scanf("%d",&a);
printf("enter the number to check weather it is max or not:");
scanf("%d",&b);
printf("enter the number to check weather it is max or not:");
scanf("%d",&c);
printf("enter the number to check weather it is max or not:");
scanf("%d",&d);
printf("enter the number to check weather it is max or not:");
scanf("%d",&e);
if(a>b && a>c && a>d && a>e)
{
printf("%d is the max number",a);
}
else if (b>c && b>d && b>e)
{
printf("%d is the max number",b);
}
else if (c>d && c>e)
{
printf("%d is the max number",c);
}
else if (d>e)
{
printf("%d id the max number",d);
}
else
{
printf("%d is the max number",e);
}
getch();
}