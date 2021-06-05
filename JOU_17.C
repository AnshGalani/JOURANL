/* w a p to create menu driven program which perform following operation using UDF
1.Find length of string
2.Find vowel of string
3.Find total words in string
4.exit
*/

#include<stdio.h>
#include<conio.h>

int length(char a[]);
int vowel(char b[]);
int words(char a[]);
int menu();

void main()
{
    int x,y;
    char n[100],yn;
    do
    {
    clrscr();
    printf("\nEnter your string :\n");
    gets(n);
    x=menu();
    switch(x)
    {
    case 1:
	y=length(n);
	clrscr();
	printf("\n\tyour string is %s and String length is %d",n,y);
	break;
    case 2:
	y=vowel(n);
	clrscr();
	printf("\n\tyour string is %s and Total vowels in string is %d",n,y);
	break;
    case 3:
	y=words(n);
	clrscr();
	printf("\n\tyour string is %s and words in string is %d",n,y);
	break;
    case 4:
	exit(0);
    default :
	printf("\nPlease enter valid number");
    }
    printf("\n\nDo you want to continue (for yes press=Y/y,For no press=N/n");
    flushall();
    scanf("%c",&yn);
    }while(yn=='Y' || yn=='y');
    getch();
}

int menu()
{
    int i;
    printf("\n\t\t\t\tMENU\n");
    printf("\t\t===============================================\n");
    printf("\t\t1.Find length of string\n\t\t2.Find vowel of string\n\t\t3.Find total words in string\n\t\t4.exit\n");
    printf("\t\t===============================================\n");
    printf("\t\tEnter your choise(1 to 4):");
    scanf("%d",&i);
    return i;
}

int length(char a[])
{

    int i,len=0;
    for(i=0;a[i]!=0;i++)
	len++;
    return len;
}

int vowel(char b[])
{
    int i,c=0;
    for(i=0;i<strlen(b);i++)
	if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
	c++;
	return c;
}

int words(char a[])
{
    int i,w=0;
    for(i=0;a[i]!='\0';i++)
    {
	if(a[i]==' ')
	{
	    continue;
	}
	w++;
    }
    return w;
}
