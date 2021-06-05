/* w a p to create UDF "strevenword" which print even number of character of string */

#include<stdio.h>
#include<conio.h>

void strevenword();
void main()
{
    clrscr();
    strevenword();;
    getch();
}
void strevenword()
{
    char a[100];
    int i;
    printf("Enter string\n");
    gets(a);
    printf("\nthe string with characters on even position is:");
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
            printf("%c",a[i]);
        }
    }
}
