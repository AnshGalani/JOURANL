/* w a p to multiplication of two matrix
ANSH GALANI */

#include <stdio.h>
#include <conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum;
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
        {
            sum=0;
            for(k=0;k<3;k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
        }

	printf("\nMATRIX MULTIPLICATION IS:\n");
	for(i=0;i<3;i++)
        {
		for(j=0;j<3;j++)
			printf("%d\t",c[i][j]);
		printf("\n");
	}
	getch();
}
