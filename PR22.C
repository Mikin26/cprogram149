#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
	printf("Enter the value of a:");
	scanf("%c",&a);
	if (a>='a'&& a<='z'|| a>='A'&& a>='Z')
	{
		printf("%c it is an alphabet",a);
	}
	else if (a>='0'&& a<='9')
	{
	printf("%c it is the digit",a);
	}
	else
	{
	printf("%c it is a special char",a);
	}
getch();
}
