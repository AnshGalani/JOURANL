/*w a p program to create user define function (which take argument and return value) check inputted number is palindrome or not */

#include<stdio.h>
#include<conio.h>
int palindrome (int x);
void main()
{
    int a,y;
    clrscr();
    printf("Enter a number to check it palindrome or not");
    scanf("%d",&a);
    y=palindrome(a);
    if(y==0)
        printf("\nThe given number is palindrome");
    else
        printf("\nThe given number is  not palindrome");
    getch();
}
int palindrome(int i)
{
    int original ,reverse=0;
    original=i;
    while(i !=0)
    {
        reverse=reverse*10+i%10;
        i=i/10;
    }
    if(reverse==original)
    {
        return 0;
    }
}
