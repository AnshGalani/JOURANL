/* w a p to create user define function armstrong which take  input and print the number is armstrong or not */

#include<stdio.h>
#include<conio.h>

void armstrong();

void main()
{
    clrscr();
    armstrong();
    getch();
}

void armstrong()
{
    int n,s,sum=0,temp;
	printf("Enter number you want check armstrong or not:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		s=n%10;
		sum=sum+(s*s*s);
		n=n/10;
	}
	if(sum==temp)
	{
		printf("\nNumber is Armstrong");
	}
	else
	{
		printf("\nNumber is not Armstrong");
	}
}
