#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct record
{
	char name[20];
	int roll;
	int marks;
}s;
main()
{
	int i,n,flg=0;
	FILE *fp,*fp1;
	char name[20];
	fp=fopen("myfile","r");
	if(fp==NULL)
	{
		perror("fopen");
		exit(0);
	}
	printf("enter the number to delet\n");
	scanf("%s",name);
	fp1=fopen("tempfile","w");
	while(fread(&s,sizeof(s),1,fp)==1)
	{
		if(strcmp(name,s.name)!=0)
			fwrite(&s,sizeof(s),1,fp1);
		else
			flg=1;
	}

	fclose(fp);
	fclose(fp1);
//	remove("myfile");
	rename("tempfile","myfile");
	if(flg==0)
		printf("not\n");
	else
		printf("delete\n");



}
