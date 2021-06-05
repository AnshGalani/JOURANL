/*w a p to enter 5 string and search any string among then
input : om,sai,ram,radha,kishan
search :ram
output : ram is available into array
 */

#include<stdio.h>
#include<conio.h>
void main()
{
	char s[5][10],f[10];
	int i,flag=0;	//flag variable assum value cannot be availble in array
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter string %d",i);
		gets(s[i]);
	}
	 clrscr();
	//print string
	for(i=0;i<5;i++)
		printf("%s\n",s[i]);

	//searching string
	printf("\n\n\t Enter string which you want to search:");
	gets(f);
	for(i=0;i<5;i++)
	{
		if(strcmp(s[i],f)==0) //match f with each string of array s
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\nString is avialbale...!!!");
	else
		printf("\nString is not avialbale...!!!");
	getch();
}
