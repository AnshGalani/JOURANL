/*w a p to create structure markshkeet(sid,sname,sub1,sub2,sub3,total,percentage).
 Enter 5 student marksheet and print it.
 */

#include<stdio.h>
#include<conio.h>
struct marksheet
{
	int sid,sub1,sub2,sub3,total,per;
	char sname[30];
};
void main()
{
	struct marksheet s[5];
	int i;
	float pr;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter student id for student %d:",i+1);
		scanf("%d",&s[i].sid);
		printf("\nEnter student name for student %d:",i+1);
		scanf("%s",&s[i].sname);
		printf("\nEnter student mark for sub1:");
		scanf("%d",&s[i].sub1);
		printf("\nEnter student mark for sub2:");
		scanf("%d",&s[i].sub2);
		printf("\nEnter student mark for sub3:");
		scanf("%d",&s[i].sub3);
		system("cls");
		s[i].total=s[i].sub1+s[i].sub2+s[i].sub3;
		s[i].per=s[i].total/3;
	}
	clrscr();
	printf("\nsid\tsname\tsub1\tsub2\tsub3\ttotal\tpercentage");
	printf("\n\n===========================================================");
	for(i=0;i<5;i++)
	{
		printf("\n\n%d\t%s\t%d\t%d\t%d\t%d\t%d",s[i].sid,s[i].sname,s[i].sub1,s[i].sub2,s[i].sub3,s[i].total,s[i].per);
	}
	getch();
}
