/* w a p to create structure inventory (iid,iname,qut,rate,amount). Enter 5 items in inventory.amount
perform followinf operation
1:-Search item where qut>5
2:-Search item where rate <10 and name is start with "p"
3:-Sort item on item name (ascending order)
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct inventory
{
	int iid,qut,amount,rate;
	char iname[30];
};
void main()
{
	struct inventory s[5];
	int i,j,temp1;
	char temp[50];
	int id,flag=0;
	clrscr();
	for(i=0;i<5;i++)
	{
	    printf("\t\t\t\tEnter info of inventory %d\n",i+1);
	    printf("\n________________________________________________________________________________");

		printf("\nEnter iid %d:-",i+1);
		scanf("%d",&s[i].iid);

		printf("\nEnter iname %d:-",i+1);
		scanf("%s",&s[i].iname);

		printf("\nEnter qut %d:-",i+1);
		scanf("%d",&s[i].qut);

		printf("\nEnter rate %d:-",i+1);
		scanf("%d",&s[i].rate);

		printf("\nEnter amount %d:-",i+1);
		scanf("%d",&s[i].amount);

		clrscr();
	}
	clrscr();
	printf("\t\t\t\tINVENTORY LIST");
	printf("\n\t\t\t=============================");
	printf("\n\niid\tiname\tqut\trate\tamount");
	printf("\n\n===========================================");
	for(i=0;i<5;i++)
	   printf("\n\n%d\t%s\t%d\t%d\t%d",s[i].iid,s[i].iname,s[i].qut,s[i].rate,s[i].amount);
	   printf("\n\n\t\t1:search item where qut>5");
	   printf("\n\t\t2:search item where rate<10 and item name in start whith ('p')");
	   printf("\n\t\t3:sort item name (ascending order)");
	   printf("\n\n\t\tEnter your choice:-");
	   scanf("%d",&id);
	switch(id)
	{
	case 1:
	    clrscr();
	    printf("\niid\tiname\tqut\trate\tamount");
	    printf("\n\n===========================================");
	    for(i=0;i<5;i++)
	    {
	       if(s[i].qut>=5)
	       {

		  printf("\n\n%d\t%s\t%d\t%d\t%d",s[i].iid,s[i].iname,s[i].qut,s[i].rate,s[i].amount);
		  flag=1;
	       }
	    }
	    if(flag==0)
	       printf("\n\nThere is no item with quantity more than 5");
	    break;

	case 2:
	     clrscr();
	     printf("\niid\tiname\tqut\trate\tamount");
	     printf("\n\n===========================================");
	    for(i=0;i<5;i++)
	    {
		 if(s[i].rate<10 && (s[i].iname[0]=='p'))
		 {
		     printf("\n\n%d\t%s\t%d\t%d\t%d",s[i].iid,s[i].iname,s[i].qut,s[i].rate,s[i].amount);
		     flag=1;
		 }
	     }
		if(flag==0)
			printf("\n\nThere is no item with rate less than 10 and whose name starts with P");
		break;

	case 3:
	    for(i=0;i<5;i++)
	    {
	       for(j=i+1;j<5;j++)
	       {
		  if(strcmp(s[i].iname,s[j].iname)>0)
		  {
		      temp1=s[i].iid;
		      s[i].iid=s[j].iid;
		      s[j].iid=temp1;

		     strcpy(temp,s[i].iname);
		     strcpy(s[i].iname,s[j].iname);
		     strcpy(s[j].iname,temp);

		     temp1=s[i].qut;
		     s[i].qut=s[j].qut;
		     s[j].qut=temp1;

		     temp1=s[i].rate;
		     s[i].rate=s[j].rate;
		     s[j].rate=temp1;

		     temp1=s[i].amount;
		     s[i].amount=s[j].amount;
		     s[i].amount=temp1;
		  }
	      }
	   }
	   clrscr();
	   printf("\t\t\t\tINVENTORY SORT ");
	   printf("\n\t\t\t=============================");
	   printf("\n\niid\tiname\tqut\trate\tamount");
	   printf("\n\n===========================================");
	   for(i=0;i<5;i++)
	      printf("\n\n%d\t%s\t%d\t%d\t%d",s[i].iid,s[i].iname,s[i].qut,s[i].rate,s[i].amount);
	   break;

	default:
	   printf("\n\nSORRY");
	   printf("\nPLEASE CHOOSE FROM ONE OF THE ABOVE OPTIONS ...!!! ");
       }
        getch();
}
