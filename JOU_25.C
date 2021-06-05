/*w a p to pass 2d integer array and perform addition of 2 matrix*/
#include<stdio.h>
#include<conio.h>
int a[3][3],b[3][3],c[3][3];

void input();
void output();
void addition();

void main()
{
    int i,j;
    system("cls");
    input();
    output();
    addition();
    getch();
}

void input()
{
    int i,j;
    system("cls");
    printf("\nENTER VALUE FOR MATRIX A:\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	   scanf("%d",&a[i][j]);
	}
    }
    printf("\nENTER VALUE FOR MATRIX B\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    scanf("%d",&b[i][j]);
	}
    }
}

void output()
{
    int i,j;
    system("cls");
    printf("\nMATRIX A IS:\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	    printf("%d\t",a[i][j]);
	    printf("\n");
    }
    printf("\nMATRIX B IS:\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	    printf("%d\t",b[i][j]);
	    printf("\n");
    }
}

void addition()
{
    int i,j;
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    c[i][j]=a[i][j]+b[i][j];
	}
    }
    printf("\nMATRIX ADDITION IS :\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	    printf("%d\t",c[i][j]);
	    printf("\n");
    }
}