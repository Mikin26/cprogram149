#include<stdio.h>
#include<conio.h>
void main()
{
long int a=1,n,sum=1 ;
clrscr();
	printf("Enter the no n:");
	scanf("%ld",&n);
	while(a<=n)
	{
		sum*=a;
		printf("%ld\n",sum);

		a++;
	}

getch();
}