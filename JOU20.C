/*w a p to create menu driven program which perform using UDF
A.Sorting
B.Searching
C.Sum of value in array
D.Find min number
E.Find max number
F.Exit
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int menu();
void sorting();
void search();
void sum();
void mini();
void maxi();

void main()
{
    int r;
    r=menu();
    switch(r)
    {
    case 'a':
    case 'A':
	sorting();
	break;
    case 'b':
    case 'B':
	search();
	break;
    case 'c':
    case 'C':
	sum();
	break;
    case 'd':
    case 'D':
	mini();
	break;
    case 'e':
    case 'E':
	maxi();
	break;
    case 'f':
    case 'F':
	exit(0);
	break;
    default:
	printf("\n Invalid choice");
	break;
    }
    getch();
}

int menu()
{
    char choise;
    system("cls");
    printf("\n\t\t\t\tMENU\n");
    printf("\t\t===============================================\n");
    printf("\t\tA.Sorting\n");
    printf("\t\tB.Searching\n");
    printf("\t\tC.Sum of value in array\n");
    printf("\t\tD.Find minimum number\n");
    printf("\t\tE.Find maximum number\n");
    printf("\t\tF.Exit\n");
    printf("\t\t===============================================\n");
    printf("\t\t\tEnter your choise(A to E):");
    scanf("%c",&choise);
    return choise;
}


void sorting()
{
    int r,a[100],i,j,temp;
    system("cls");
    printf("\t\t\tSorting");
    printf("\n\t\t============================");
    printf("\nEnter your array size:\n");
    scanf("%d",&r);
    system("cls");
    printf("\nEnter array\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
    scanf("%d",&a[i]);
    system("cls");
    printf("\nYour array is\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
	printf("%d\n",a[i]);
     for(i=0;i<r;i++)
     {
	 for(j=i+1;j<r;j++)
	 {
	     if(a[i]>a[j])
	     {
		 temp=a[i];
		 a[i]=a[j];
		 a[j]=temp;
	     }
	 }
     }
     printf("\nSorting array is\n");
     printf("\n=======================\n");
     for(i=0;i<r;i++)
	printf("%d\n",a[i]);
	system("pause>null");
}


void search()
{
    int r,a[100],i,j,flag=0;
    system("cls");
    printf("\t\t\tSearching");
    printf("\n\t\t==============================");
    printf("\nEnter your array size\n");
    scanf("%d",&r);
    system("cls");
    printf("\nEnter array\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
    scanf("%d",&a[i]);
    system("cls");
    printf("\nYour array is\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
	printf("%d\n",a[i]);
	printf("\n\t==============================\n");
	printf("\n\tEnter array you want to search:\n");
	printf("\n\t==============================\n");
	scanf("%d",&j);
    for(i=0;i<r;i++)
    {
	if(a[i]==j)
	{
	    printf("\n\tArray is found");
	    flag=1;
	    break;
	}
    }
    if(flag==0)
	printf("\n\tArray is not found");
	system("pause>null");
}

void sum()
{
     int r,a[100],i,sum=0;
    system("cls");
    printf("\t\t\tSum of value in array");
    printf("\n\t\t==============================================");
    printf("\nEnter your array size\n");
    scanf("%d",&r);
    system("cls");
    printf("\nEnter array\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
    scanf("%d",&a[i]);
    system("cls");
    printf("\nYour array is\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
	printf("%d\n",a[i]);
    for(i=0;i<r;i++)
	sum=sum+a[i];
    printf("\n\t=======================\n");
    printf("\n\tSum of array is:- %d",sum);
    printf("\n\n\t=======================\n");
    system("pause>null");
}

void mini()
{
    int r,a[100],i,min=0;
    system("cls");
    printf("\t\t\tFind minimum number");
    printf("\n\t;\t============================================");
    printf("\nEnter your array size\n");
    scanf("%d",&r);
    system("cls");
    printf("\nEnter array\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
    scanf("%d",&a[i]);
    system("cls");
    printf("\nYour array is\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
	printf("%d\n",a[i]);
    min=a[0];
    for(i=0;i<r;i++)
    {
	if(min>a[i])
	    min=a[i];
    }
    printf("\n\t=======================\n");
    printf("\n\tminimum of array is:- %d",min);
    printf("\n\n\t=======================\n");
    system("pause>null");
}

void maxi()
{
    int r,a[100],i,max=0;
    system("cls");
    printf("\t\t\tFind maximum number");
    printf("\n\t\t==============================================");
    printf("\nEnter your array size\n");
    scanf("%d",&r);
    system("cls");
    printf("\nEnter array\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
    scanf("%d",&a[i]);
    system("cls");
    printf("\nYour array is\n");
    printf("\n=======================\n");
    for(i=0;i<r;i++)
	printf("%d\n",a[i]);
    max=a[0];
    for(i=0;i<r;i++)
    {
	if(max<a[i])
	    max=a[i];
    }
    printf("\n\t=======================\n");
    printf("\n\tmaximum of array is:- %d",max);
    printf("\n\n\t=======================\n");
    system("pause>null");
}
