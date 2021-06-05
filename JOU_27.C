
/* w a p to pass 5 string and print it with vowel in each string using udf */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


void input();
void print(char [5][30]);
void vowel(char [5][30]);
void main()
{
    system("cls");
    input();
    //vowel();
    getch();
}

void input()
{
    int i;
    char a[5][30];
    system("cls");
    printf("\nEnter 5 string\n");
    for(i=0;i<5;i++)
    {
	gets(a[i]);
    }
    print(a);
}

void print(char s[5][30])
{
    int i,j;
    system("cls");
    printf("\nYour strig is:");
    printf("\n====================\n");
    for(i=0;i<5;i++)
    {
	printf("%s\n",s[i]);
    }
    printf("\n\nPrint vowel");
    printf("\n=====================\n");
    for(i=0;i<5;i++)
    {
	int count = strlen(s[i]);
	for(j=0;j<count;j++)
	{
	    if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u'||s[i][j]=='A'||s[i][j]=='E'||s[i][j]=='I'||s[i][j]=='O'||s[i][j]=='U')
	    {
		printf("%c\t",s[i][j]);
	    }
	}
	printf("\n");
    }
}
