#include<stdio.h>
#include<stdlib.h>
main()
{
	int (*a)[4],i,j,row;
	printf("enter the no of rows\n");
	scanf("%d",&row);
	a=(int (*)[4])calloc(1,row*4*sizeof(int));
	for(i=0;i<row;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=i+j;
		}
	}

	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
}

