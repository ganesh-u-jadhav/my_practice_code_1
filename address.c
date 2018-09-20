#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int v=10;
main()
{
	char *ptr,*str,pp[200];
	ptr=getenv("PATH");
	printf("befor path=%s\n",ptr);
	str=getenv("PWD");
	printf("path=%s\n",ptr);
strcpy(pp,ptr);
strcat(pp,":");
strcat(pp,str);

ptr=pp;
	printf("aaafter path=%s\n",ptr);
setenv("PATH",ptr,1);


	ptr=getenv("PATH");
	printf("after path=%s\n",ptr);
}

