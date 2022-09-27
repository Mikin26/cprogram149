#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
	printf("Enter the number:");
	scanf("%d",&a);
	while(a<=10)
	{
	if (a%2!=0)
	printf("%d\n",a);
	a++;
	}
getch();
}