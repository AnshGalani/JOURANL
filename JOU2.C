/* w a p to create 3*3 matrix of numeric value.fine inputted value by user in this matrix. if user is not available then print proper message
ANSH GALANI */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,n,f=0;
	clrscr();
	//input value
	for(i=0;i<3;i++) //row
	{
		for(j=0;j<3;j++) // column
		{
			printf("Enter value for a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	clrscr();
	//print matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	// searching value
	printf("\n\n\t\tEnter value which you want to search:");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(n==a[i][j])
			{
				f=1;
				break;
			}
		}
	}
	if(f==1)
		printf("\nvalue is found");
	else
		printf("\nvalue is not found");
	getch();
}
