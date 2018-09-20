#include<stdio.h>
#include<stdlib.h>
main()
{
	char arr[10],str[10][10]={"violet","indigo","blue","green","yellow","orenge","red"};
	int i,n;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("ch=%d\n",n);
	
	for(i=0;i<=7;i++)
	{
		printf("%d",(n>>i)&1);
	}


printf("\n");
	for(i=0;i<=7;i++)
	{
		if((n>>i)&1)
			printf("%s\n",str[i]);
	}


}
