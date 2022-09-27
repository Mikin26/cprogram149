#include<stdio.h>
#include<conio.h>
void main()
{
int A;
clrscr();
printf("Enter the number:");
scanf("%d",&A);
printf("The number is:%d\n",A);
if (A%2==0)
{
printf("The given number is Even number");
}
else
{
printf("The given number is Odd number");
}
getch();
}
