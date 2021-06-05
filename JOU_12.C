/* w a p to print factorial using udf "factorial" */

#include<stdio.h>
#include<conio.h>

int factorial();

void main()
{
    int a,r;
    clrscr();
    printf("\nEnter number you want to factorial:-\n");
    scanf("%d",&a);
    r=factorial(a);
    printf("\n\tFactorial number is %d",r);
    getch();
}

int factorial(int f)
{
    int i,x=1;
    for(i=1;i<=f;i++)
    {
        x=x*i;
    }
    return x;
}
