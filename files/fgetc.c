#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	int ch;
	if((fp=fopen("myfile","r"))==NULL)
	{
		printf("file error\n");
		exit(0);
	}
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	fclose(fp);
}
