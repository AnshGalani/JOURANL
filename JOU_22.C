
/* w a p to carete structur emp(eid,ename,dept,basic,da,hra,pf,gross,net).Enter one employee details and print spit from follwing criteria useing udf.
NOTE:
da=120 % of basic
hra=40 % of basic
pf=50% basic
gross=basic+da+har
net=gross-pf
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp
{
    int eid,basic;
    char ename[50],dept[20];
    int da,hra,pf,gross,net;
}x;

void inpute();
void outpute();
void main()
{
    clrscr();
    inpute();
    outpute();
    getch();
}

void inpute()
{
    system("cls");
    printf("\nEnter employee id:-");
    scanf("%d",&x.eid);
    printf("\nEnter employee name:-");
    scanf("%s",&x.ename);
    printf("\nEnter employee dept:-");
    scanf("%s",&x.dept);
    printf("\nEnter employee baisc:-");
    scanf("%d",&x.basic);
}

void outpute()
{
    system("cls");
    x.da=x.basic*120/100;
    x.hra=x.basic*40/100;
    x.pf=x.basic*50/100;
    x.gross=x.basic+x.da+x.hra;
    x.net=x.gross-x.pf;
    printf("\nid\tname\tdept\tbasic\tda\thra\tpf\tgross\tnet");
    printf("\n======================================================================");
    printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d",x.eid,x.ename,x.dept,x.basic,x.da,x.hra,x.pf,x.gross,x.net);
}