/*write a manu driven program to above structur and perform follwing operation using udf
1.Enter 5 record of employee
2.Print salary slip
3.Seaarch based on salary>10000 && dept="admin"
4.Sort record based on salary
5.Sort record based on dept
6.Exit
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct emp
{
    int eid,basic,da,hra,pf,gross,net;
    char ename[50],dept[50];
}x[5];

void input_emp();
void print();
void salary_emp();
void search_emp();
void sort_salay();
void sort_dept();
int menu();
void main()
{
    int r;
    system("cls");
    input_emp();
    system("cls");
    r=menu();
    switch (r)
    {
        case 1:
            system("cls");
            input_emp();
            break;
        case 2:
            system("cls");
            salary_emp();
            break;
        case 3:
            system("cls");
            search_emp();
            break;
        case 4:
            system("cls");
            sort_salay();
            break;
        case 5:
            system("cls");
            sort_dept();
            break;
        case 6:
            exit(1);
        default:
            printf("invaild choise");
    }
    system("pause>nul");

}
int menu()
{
    int choise;
    system("cls");
    printf("\n\t\t\t\tMENU\n");
    printf("\t\t===============================================\n");
    printf("\t\t1.Enter record of five employee\n");
    printf("\t\t2.Print salary slip\n");
    printf("\t\t3.Search based on salary>10,000 and dept =admin\n");
    printf("\t\t4.Sort record based on salary \n");
    printf("\t\t5.Sort record based on dept\n");
    printf("\t\t6.Exit\n");
    printf("\t\t===============================================\n");
    printf("\t\t\tEnter your choise(1 to 6):");
    scanf("%d",&choise);
    return choise;
}

void input_emp()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter employee id:");
        scanf("%d",&x[i].eid);
        printf("\nEnter employee name:");
        scanf("%s",&x[i].ename);
        printf("\nEnter employee dept:");
        scanf("%s",&x[i].dept);
        printf("\nEnter employee basic:");
        scanf("%d",&x[i].basic);
        system("cls");
    }
    print();
}

void print()
{
    int i;
    printf("\t\t\t\tEmployee\n");
    printf("\n\t\t\t=============================\n");
    printf("\nid\tname\tdept\tbasic");
    printf("\n================================");
    for(i=0;i<5;i++)
        printf("\n%d\t%s\t%s\t%d",x[i].eid,x[i].ename,x[i].dept,x[i].basic);
}

void salary_emp()
{
    int i;
    printf("\n\t\t\tEmployee salary\n");
    printf("\t\t====================================\n");
    printf("\nname\tbasic\tda\thra\tpf\tgross\tnet");
    printf("\n=====================================================");
    for(i=0;i<5;i++)
    {
        x[i].da=x[i].basic*120/100;
        x[i].hra=x[i].basic*40/100;
        x[i].pf=x[i].basic*50/100;
        x[i].gross=x[i].basic+x[i].da+x[i].hra;
        x[i].net=x[i].gross-x[i].pf;
        printf("\n%s\t%d\t%d\t%d\t%d\t%d\t%d",x[i].ename,x[i].basic,x[i].da,x[i].hra,x[i].pf,x[i].gross,x[i].net);
    }
}

void search_emp()
{
    int i,flag=0;
    for(i=0;i<5;i++)
    {
        x[i].da=x[i].basic*120/100;
        x[i].hra=x[i].basic*40/100;
        x[i].pf=x[i].basic*50/100;
        x[i].gross=x[i].basic+x[i].da+x[i].hra;
        x[i].net=x[i].gross-x[i].pf;
    }
    printf("\nid\tname\tdept\tbasic\tda\thra\tpf\tgross\tnet\n");
    printf("====================================================================");
    for(i=0;i<5;i++)
    {
        if(strcmp(x[i].dept,"admin")==0 && x[i].basic>10000)
        {
          printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d",x[i].eid,x[i].ename,x[i].basic,x[i].da,x[i].hra,x[i].pf,x[i].gross,x[i].net);
         flag=1;
        }
    }
    if(flag==0)
    printf("\n\n\tNo record found");
}

void sort_salay()
{
    int i,j,temp;
    char temp1[50];
    for(i=0;i<5;i++)
    {
        x[i].da=x[i].basic*120/100;
        x[i].hra=x[i].basic*40/100;
        x[i].pf=x[i].basic*50/100;
        x[i].gross=x[i].basic+x[i].da+x[i].hra;
        x[i].net=x[i].gross-x[i].pf;
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(x[i].basic>x[j].basic)
            {
                temp=x[i].eid;
                x[i].eid=x[j].eid;
                x[j].eid=temp;

                strcpy(temp1,x[i].ename);
                strcpy(x[i].ename,x[j].ename);
                strcpy(x[j].ename,temp1);

                strcpy(temp1,x[i].dept);
                strcpy(x[i].dept,x[j].dept);
                strcpy(x[j].dept,temp1);

                temp=x[i].basic;
                x[i].basic=x[j].basic;
                x[j].basic=temp;

                temp=x[i].da;
                x[i].da=x[j].da;
                x[j].da=temp;

                temp=x[i].hra;
                x[i].hra=x[j].hra;
                x[j].hra=temp;

                temp=x[i].pf;
                x[i].pf=x[j].pf;
                x[j].pf=temp;

                temp=x[i].gross;
                x[i].gross=x[j].gross;
                x[j].gross=temp;

                temp=x[i].net;
                x[i].net=x[j].net;
                x[j].net=temp;
            }
        }
    }
    printf("\n\t\t\tSort record based on salary\n");
    printf("====================================================================\n");
    printf("\nid\tname\tdept\tbasic\tda\thra\tpf\tgross\tnet\n");
    printf("======================================================================");
    for (i=0;i<5;i++)
    printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d",x[i].eid,x[i].ename,x[i].dept,x[i].basic,x[i].da,x[i].hra,x[i].pf,x[i].gross,x[i].net);
}

void sort_dept()
{
    int i,j,temp;
    char temp1[50];
    for(i=0;i<5;i++)
    {
        x[i].da=x[i].basic*120/100;
        x[i].hra=x[i].basic*40/100;
        x[i].pf=x[i].basic*50/100;
        x[i].gross=x[i].basic+x[i].da+x[i].hra;
        x[i].net=x[i].gross-x[i].pf;
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(x[i].dept,x[j].dept)>0)
            {
                temp=x[i].eid;
                x[i].eid=x[j].eid;
                x[j].eid=temp;

                strcpy(temp1,x[i].ename);
                strcpy(x[i].ename,x[j].ename);
                strcpy(x[j].ename,temp1);

                strcpy(temp1,x[i].dept);
                strcpy(x[i].dept,x[j].dept);
                strcpy(x[j].dept,temp1);

                temp=x[i].basic;
                x[i].basic=x[j].basic;
                x[j].basic=temp;

                temp=x[i].da;
                x[i].da=x[j].da;
                x[j].da=temp;

                temp=x[i].hra;
                x[i].hra=x[j].hra;
                x[j].hra=temp;

                temp=x[i].pf;
                x[i].pf=x[j].pf;
                x[j].pf=temp;

                temp=x[i].gross;
                x[i].gross=x[j].gross;
                x[j].gross=temp;

                temp=x[i].net;
                x[i].net=x[j].net;
                x[j].net=temp;
            }
        }
    }
    printf("\n\t\t\tSort record based on dept\n");
    printf("=====================================================================");
    printf("\nid\tname\tdept\tbasic\tda\thra\tpf\tgross\tnet\n");
    printf("=====================================================================");
    for (i=0;i<5;i++)
    printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d",x[i].eid,x[i].ename,x[i].dept,x[i].basic,x[i].da,x[i].hra,x[i].pf,x[i].gross,x[i].net);
}
