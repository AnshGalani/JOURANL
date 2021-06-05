/* w a p to pass 2d character array with 5 string and perform sorting and print all string ascending order*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char a[5][30];

void print(char [5][30]);
void sort(char [5][30]);
void main()
{

    int i;
    system("cls");
    for(i=0;i<5;i++)
    {
	printf("\nEnter string %d",i);
	gets(a[i]);
    }
    print(a);
    getch();
}

void print(char s[5][30])
{
    int i;
    system("cls");
    printf("\nYour string is :\n");
    printf("=======================\n");
    for (i=0;i<5;i++)
    printf("%s\n",s[i]);
    sort(s);
}

void sort(char a[5][30])
{
    int i,j,t[10];
    printf("\nSorted string is:");
    printf("\n======================\n");
    for(i=0;i<5;i++)
    {
	for(j=i+1;j<5;j++)
	{
	    if(strcmp(a[i],a[j])>0)
	    {
		strcpy(t,a[i]);
		strcpy(a[i],a[j]);
		strcpy(a[j],t);
	    }
	}
    }
    for(i=0;i<5;i++)
       printf("\n%s",a[i]);

}