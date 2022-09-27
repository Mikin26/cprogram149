#include<stdio.h>
#include<conio.h>
void main()
{
int A,B;
clrscr();
printf("Enter the number:");
scanf("%d",&A);
printf("The number is:%d\n",A);
printf("Enter the number");
scanf("%d",&B);
printf("The number is:%d\n",B);
if(A>B)
{
printf("%d is max number",A);
}
else
{
printf("%d is max number",B);
}
getch();
}
