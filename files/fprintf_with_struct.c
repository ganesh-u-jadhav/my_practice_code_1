#include<stdio.h>
#include<stdlib.h>
struct msgs
{
	char send_m[100],recv_m[100];
};
main()
{
	FILE *fp;
	struct msgs v;
	int n,i;
	fp=fopen("myfile","w");
	if(fp==NULL)
	{
		printf("file is not open\n");
		exit(0);
	}
	printf("enter the number of record\n");
	scanf("%d",&n);
	__fpurge(stdin);
	for(i=0;i<n;i++)
	{
		printf("enter ur m1 ans m2\n");
		//scanf("%[^\n]s%[^\n]s",v.send_m,v.recv_m);
	//	fgets(v.send_m,100,stdin);
		gets(v.send_m);
		fgets(v.recv_m,100,stdin);
		fprintf(fp,"%s====>%s\n",v.send_m,v.recv_m);
	}
	return 0;
}
