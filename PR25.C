#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
	printf("Enter the value of a:");
	scanf("%c",&a);
	switch (a)
	{
	case 'm':
		printf("Monday");
		break;
	case 't':
		printf("Tuesday");
		break;
	case 'w':
		printf("Wednesday");
		break;
	case 'h':
		printf("Thursday");
		break;
	case 'f':
		printf("Friday");
		break;
	case 's':
		printf("Saturday");
		break;
	case 'u':
		printf("Sunday");
		break;
	default:
		printf("invalid char");
	}
getch();
}