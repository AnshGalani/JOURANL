/* w a p to carete structur emp(eid,ename,dept,basic,da,hra,pf,gross,net).Enter 5 employee details and print spit from follwing criteria useing udf.
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

}x[5];

void input();
void output();
void main()
{
    input();
    output();
    getch();
}

void input()
{
    int i;
    system("cls");
    for(i=0;i<5;i++)
    {
	printf("\nEnter employee id:-");
	scanf("%d",&x[i].eid);
	printf("\nEnter employee name:-");
	scanf("%s",&x[i].ename);
	printf("\nEnter employee dept:-");
	scanf("%s",&x[i].dept);
	printf("\nEnter employee baisc:-");
	scanf("%d",&x[i].basic);
	system("cls");
    }
}

void output()
{
    int i;
    system("cls");
    printf("\n\t\t\t\tEmployee details");
    printf("\n======================================================================");
    printf("\nid\tname\tdept\tbasic\tda\thra\tpf\tgross\tnet");
    printf("\n======================================================================");
    for(i=0;i<5;i++)
    {
	x[i].da=x[i].basic*120/100;
	x[i].hra=x[i].basic*40/100;
	x[i].pf=x[i].basic*50/100;
	x[i].gross=x[i].basic+x[i].da+x[i].hra;
	x[i].net=x[i].gross-x[i].pf;
	printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d",x[i].eid,x[i].ename,x[i].dept,x[i].basic,x[i].da,x[i].hra,x[i].pf,x[i].gross,x[i].net);
    }
}