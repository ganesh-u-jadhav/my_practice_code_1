#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
main()
{
	int arr[max][max],row,col,i,j;
	printf("enter the number of row and col\n");
	scanf("%d%d",&row,&col);
	srand(getpid());
	printf("enter the elemnt of matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr[i][j]=rand()%20+1;
		}
	}
	printf("element are\n");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}

	printf("less then row\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]<=row)
			printf("%d\t",arr[i][j]);
		}
	}

	printf("\ngreater then col\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]>=col)
			printf("%d\t",arr[i][j]);
		}
	}
printf("\n");
}


