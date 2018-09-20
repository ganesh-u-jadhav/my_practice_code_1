#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int stat;
	char comdbuf[20];
	char *args[4];
	while(1)
	{
		printf("my shell>");
		gets(comdbuf);
		args[0]=comdbuf;
		args[1]=NULL;
		if((strncmp(comdbuf,"ver",3))==0)
		  {
		  printf("simple shell version 2.0 nov 23,2018\n");
		  continue;
		  }

		  if((strncmp(comdbuf,"quit",4))==0)
		  {

		  exit(0);
		  }
		int id;
		id=fork();
		if(id==0)
		{
			printf("child process\n");
			execvp(comdbuf,args);
			exit(5);
		}
		wait(&stat);
		printf("%s\n",args[0]);
	}
}
