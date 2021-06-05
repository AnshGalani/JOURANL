/*
w a p to create udf and chaeck number is even or odd by print appropriateS message*/
#include<stdio.h>
#include<conio.h>
void oddeven();

void main()
{
    clrscr();
    oddeven();
    getch();
}

void oddeven()
{
    int a;
    printf("\nEnter a number");
    scanf("%d",&a);
    if(a%2!=0)
        printf("\n\tNumber is odd");
    else
        printf("\n\tNumber is even");
}
