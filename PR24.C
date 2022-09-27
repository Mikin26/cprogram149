#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	if (a>b)
	{
		if (a>c)
		{
			if (a>d)
			{
			printf("%d is the max number",a);
			}
			else
			{
			printf("%d is the max number",d);
			}
		}
		else
		{
			if (c>d)
			{
			printf("%d is the max number",c);
			}
			else
			{
			printf("%d is the max number",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if (b>d)
			{
			printf("%d is the max number",b);
			}
			else
			{
			printf("%d is the max number",d);
			}
		}
		else
		{
			if (c>d)
			{
			printf("%d is the max number",c);
			}
			else
			{
			printf("%d is the max number",d);
			}
		}
	}
getch();
}
