#include<stdio.h>
#include<stdlib.h>
main()
{
	int *a[4];//array of pointers
	int i,j,col;
	printf("enter the no of col");
	scanf("%d",&col);
	for(i=0;i<4;i++)
	{
		a[i]=(int *)malloc(col*sizeof(int));
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<col;j++)
		{
			a[i][j]=i+j;
		}
	}
	for(i=0;i<4;i++,printf("\n"))
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
}
