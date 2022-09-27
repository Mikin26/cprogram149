#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
	printf("Enter the number:");
	scanf("%d",&a);
	while(a>=1)
	{
	printf("%d\n",a);
	a--;
	}
getch();
}