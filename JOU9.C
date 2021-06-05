/* w a p to create structure inventory (iid,iname,qut,rate,amount).
Enter 5 item in inventory.search based on its iname and print it if available otherwise print proper message
*/

#include<stdio.h>
#include<conio.h>
struct inventory
{
	int iid,qut,amount,rate;
	char iname[30];
};
void main()
{
	struct inventory s[5];
	int i,flag=0;
	char n[30];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter iid %d:-",i+1);
		scanf("%d",&s[i].iid);
		printf("\nEnter iname %d:-",i+1);
		scanf("%s",&s[i].iname);
		printf("\nEnter qut %d:-",i+1);
		scanf("%d",&s[i].qut);
		printf("\nEnter rate %d:-",i+1);
		scanf("%d",&s[i].rate);
		printf("\nEnter amount %d:-",i+1);
		scanf("%d",&s[i].amount);
		system("cls");
	}
	clrscr();
	printf("\niid\tiname\tqut\trate\tamount");
	printf("\n\n===========================================");
	for(i=0;i<5;i++)
		printf("\n\n%d\t%s\t%d\t%d\t%d",s[i].iid,s[i].iname,s[i].qut,s[i].rate,s[i].amount);
		printf("\n\n\t\tEnter iname you want to search:--");
		scanf("%s",&n);
		for(i=0;i<5;i++)
		{
			if(strcmp(s[i].iname,n)==0)
			{
			   clrscr();
			   printf("\niid\tiname\tqut\trate\tamount");
			   printf("\n\n===========================================");
			   printf("\n\n%d\t%s\t%d\t%d\t%d",s[i].iid,s[i].iname,s[i].qut,s[i].rate,s[i].amount);
			   flag=1;
			   break;
			}
		}
        if(flag==0)
        printf("\nRecord not found");
        getch();
}
