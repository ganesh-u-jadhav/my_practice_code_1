#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	char name[10];
	int age;
	fp=fopen("myfile","w");
	if(fp==NULL)
	{
		printf("file is not open\n");
		exit(0);
	}
	printf("enter ur name and age\n");
	scanf("%s%d",name,&age);
	fprintf(fp,"my name is %s and age is %d\n",name,age);
	return 0;
}
