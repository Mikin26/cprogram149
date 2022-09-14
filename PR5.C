#include<stdio.h>
#include<conio.h>
void main()
{
int A=8,B;
clrscr();
A+=2;
printf("%d\n",A);
A-=2;
printf("%d\n",A);
A*=2;
printf("%d\n",A);
A/=2;
printf("%d\n",A);
A%=2;
printf("%d\n",A);
B&=A;
printf("%d\n",B);
A^=2;
printf("%d\n",A);
A|=2;
printf("%d\n",A);
B--;
printf("%d",B);
getch();
}