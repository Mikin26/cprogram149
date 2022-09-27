#include<stdio.h>
#include<conio.h>
void main()
{
char A;
clrscr();
printf("Enter the age:");
scanf("%c",&A);
printf("The number is:%c\n",A);

if(A>='0' && A<='9')
{
printf("%c you are a digit",A);
}
else if(A>='a' && A<='z' || A>='A'&& A<='Z')
{
printf("%c character",A);
}
else
{
printf("%c  special char",A);
}
getch();
}
