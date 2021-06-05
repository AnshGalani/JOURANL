/* w a p create UDF "strvowel" which count and print the total number of vowels in string */

#include<stdio.h>
#include<conio.h>

void strvowel(char b[]);

void main()
{
    char a[100],i;
    clrscr();
    printf("\nEnter a string you want to count total vowels:\n");
    gets(a);
    strvowel(a);
    getch();
}

void strvowel(char b[])
{
    int i,c=0;
    for(i=0;i<strlen(b);i++)
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
        c++;
        printf("\nTotal vowels in string is %d",c);
}
