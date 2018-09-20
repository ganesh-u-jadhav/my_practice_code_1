#include<stdio.h>
#include<stdlib.h>
main()
{
	int bit,num,i,n,flg=0;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num==1)
	{
		printf("FLASE\n");
		return;
	}
	for(i=0;i<32;i=i+2)
	{

		n=1<<i;
		if(n==num)
		{
			flg=1;
			printf("TRUE\n");
			return;
		}
	}

	if(flg==0)
		printf("FLASE\n");

}

