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
	int i,n;
	FILE *fp;
	fp=fopen("myfile","w");
	if(fp==NULL)
	{
		perror("fopen");
		exit(0);
	}
	printf("enter the number of record\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter name\n");
		scanf("%s",s.name);
		printf("enter roll\n");
		scanf("%d",&s.roll);
		printf("enter mak\n");
		scanf("%d",&s.marks);
		fwrite(&s,sizeof(s),1,fp);
	}
	fclose(fp);
	//	return 1;

	fp=fopen("myfile","r");
	printf("\nname\troll\tmarks\n");
	while(fread(&s,sizeof(s),1,fp)==1)
	{
		printf("%s\t",s.name);
		printf("%d\t",s.roll);
		printf("%d\n",s.marks);
	}
	fclose(fp);
	return 0;


}
