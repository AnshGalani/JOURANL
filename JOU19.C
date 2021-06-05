/* w a p to create UDF maxna() which find maximum number from the array */

#include<stdio.h>
#include<conio.h>

int maxna(int x[]);

void main()
{
    int a[10],i,y;
    clrscr();
    printf("Enter 10 number your array :");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
        system("cls");
    printf("Your Array is \n ");
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    y=maxna(a);
    printf("\n\n\t\tmaximum array is %d:-",y);
           getch();

}

int maxna(int x[])
{
    int max=0,i;
    max=x[0];
    for(i=0;i<10;i++)
    {
        if(max<x[i])
        max=x[i];
    }
    return max;

}
