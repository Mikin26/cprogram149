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
if (a>b)
{
	if(a>c)
	{
		if(a>d)
		{
			if(a>e)
			{
			printf("%d is the max",a);
			}
			else
			{
			printf("%d is the max",e);
			}
		}
		else
		{
			if (d>e)
			{
			printf("%d",d);
			}
			else
			{
			printf("%d",e);
			}
		}
	}
	else
	{
		if(c>d)
		{
			if (c>e)
			{
			printf("%d",c);
			}
			else
			{
			printf("%d",e);
			}
		}
		else
		{
			if (d>e)
			{
			printf("%d",d);
			}
			else
			{
			printf("%d",e);
			}
		}
	}
}
else
{
	if (b>c)
	{
		if (b>d)
		{
			if (b>e)
			{
			printf("%d",b);
			}
			else
			{
			printf("%d",e);
			}
		}
		else
		{
			if(d>e)
			{
			printf("%d",d);
			}
			else
			{
			printf("%d",e);
			}

		}
	}
	else
	{

		if (c>d)
		{
			if(c>e)
			{
			printf("%d",c);
			}
			else
			{
				if (d>e)
				{
				printf("%d",d);
				}
				else
				{
				printf("%d",e);
				}
			}
		}
		else
		{
			if(d>e)
			{
			printf("%d",d);
			}
			else
			{
			printf("%d",e);
			}
		}
	}
}

getch();
}