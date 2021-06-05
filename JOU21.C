/*WAP to create UDF which take input the statement and convert upper case letter to lower case and lower case letter to upper case.
    For example: Hello GOOD MorninG
    Output: hELLO good mORNING.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void chang(char []);

int main()
{
    int r;
    char s[100];
    clrscr();
    printf("Enter a string");
    gets(s);
    chang(s);
    getch();
}

void chang(char a[])
{
    char ch;
    int c=0;
    while(a[c] !='\0')
    {
        ch=a[c];
        if(ch>='A' && ch<='Z')
            a[c]=a[c]+32;
        else if (ch>='a' && ch<='z')
            a[c]=a[c]-32;
        c++;
    }
    printf("\nChang case is %s",a);
}
