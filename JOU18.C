/* w a p to create searchna() which taksysteme input numeric array of 5 integer number and the number which search in array .print appropriate message regarding number is found or nou
*/
#include<stdio.h>
#include<conio.h>

void searchna();

void main()
{
    clrscr();
    searchna();
    getch();
}

void searchna()
{
    int a[5],i,j,flag=0;
    clrscr();
    for(i=0;i<5;i++)
    {
        printf("Enter array for a[%d]",i);
        scanf("%d",&a[i]);
    }
    clrscr();
    printf("your array is :\n");
    for(i=0;i<5;i++)
        printf("\n%d",a[i]);

    printf("\n\n\t\tEnter a array you want to search:");
    scanf("%d",&j);
    for(i=0;i<5;i++)
    if(a[i]==j)
    {
        printf("\nArray is found");
        flag=1;
        break;
    }
    if(flag==0)
        printf("\nArray is not found");
}
