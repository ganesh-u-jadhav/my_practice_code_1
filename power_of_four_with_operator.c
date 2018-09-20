#include<stdio.h>
#include<stdlib.h>
int power_four(int n)
{
	int count=0;
	if(n&& !(n&(n-1)))
	{
		while(n>1)
		{
			n=n>>1;
			count+=1;
		}
		return(count%2==0)?1:0;
	}
	return 0;
}

main()
{
	int num,n;
	printf("enter the number\n");
	scanf("%d",&num);
	n=power_four(num);
	if(n==1)
		printf("yes\n");
	else
		printf("no\n");
}
