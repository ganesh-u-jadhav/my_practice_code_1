#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	int ch;
	if((fp=fopen("myfile","w"))==NULL)
	{
		printf("file error\n");
		exit(0);
	}
	while((ch=getchar())!=EOF)
		fputc(ch,fp);
	fclose(fp);
}
