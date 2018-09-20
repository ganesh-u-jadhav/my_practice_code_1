#include<stdio.h>
#include<stdlib.h>
//int a=10,b=20,w,e,r;





main()
{
	char *p=NULL;
	p=malloc(0);
	if(p==NULL)
	{
		perror("malloc");
		return 0;
	}
	printf("it return address =%d\n",p);
}
