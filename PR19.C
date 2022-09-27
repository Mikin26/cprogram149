#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
	printf("Enter the char:");
	scanf("%c",&a);
	switch (a)
	{
	case 's':
		printf("sunday");
		break;
	case 'm':
		printf("monday");
		break;
	case 't':
		printf("tuesday");
		break;
	case 'w':
		printf("wednesday");
		break;
	case 'h':
		printf("thursday");
		break;
	case 'f':
		printf("firday");
		break;
	case 'a':
		printf("saturday");
		break;
	default:
		printf("%c Is not the month",a);
		break;
		}
getch();
}
