#include<stdio.h>
#include<stdlib.h>
main()
{
	int num,n;
	printf("enter the number\n");
	scanf("%d",&num);
	n=num&(num-1);
	if(n==0)
		printf("yes\n");
	else
		printf("no\n");
}
