/* w a p to enter 5 student name and print it in descending order*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[5][30],t[10];
    int i,j;
    clrscr();
    for(i=0;i<5;i++)
    {
        printf("\nEnter 5 student name %d",i);
        scanf("%s",s[i]);
    }
    /*sorting string array */
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(s[i],s[j])<0)      //ascending order= if(strcmp(s[i],s[j])>0)
            {
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);
            }
        }
    }
    clrscr();
    /*output string */
    for(i=0;i<5;i++)
        printf("\n%s",s[i]);
    getch();
}
