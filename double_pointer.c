#include<stdio.h>
#include<stdlib.h>
main()
{
	int **a,i,j,row,col;
	printf("enter the rows and cols\n");
	scanf("%d%d",&row,&col);
	a=(int **)malloc(row*sizeof(int *));
	for(i=0;i<row;i++)
	{
		a[i]=(int *)malloc(col*sizeof(int));
	}
	printf("enter the numbers\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			a[i][j]=i+j;
		}
	}
printf("enter number\n");
scanf("%d",&i);

	printf("matrix\n");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}

}
