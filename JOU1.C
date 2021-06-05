/* w a p to addition of two matrix*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
    clrscr();
	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
      clrscr();
    printf("MATRIX A IS:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nMATRIX B IS:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("\nMATRIX ADDITION IS:\n");
	for(i=0;i<3;i++)
        {
		for(j=0;j<3;j++)
			printf("%d\t",c[i][j]);
		printf("\n");
	}
	getch();
}

