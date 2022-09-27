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
	case 'j':
		printf("january");
		break;
	case 'f':
		printf("february");
		break;
	case 'r':
		printf("march");
		break;
	case 'a':
		printf("april");
		break;
	case 'm':
		printf("may");
		break;
	case 'u':
		printf("june");
		break;
	case 'y':
		printf("july");
		break;
	case 'g':
		printf("agust");
		break;
	case 's':
		printf("september");
		break;
	case 'o':
		printf("october");
		break;
	case 'n':
		printf("november");
		break;
	case 'd':
		printf("december");
		break;
	}
getch();
}
