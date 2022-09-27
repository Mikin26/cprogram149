#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n;
clrscr();
	printf("Enter the no n:");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("%d*%d=%d\n",n,a,n*a);

		a++;
	}

getch();
}