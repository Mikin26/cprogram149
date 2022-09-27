#include<stdio.h>
#include<conio.h>
void main()
{
int a=2000,n=3000;
clrscr();
	while(a<=n)
	{
		if (a%4==0 && a%100!=0 && a%100==0)
		{
			printf("%d leap years",a);
		}
		a++;
	}
getch();
}