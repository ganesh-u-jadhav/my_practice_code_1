#include<stdio.h>
#include<pthread.h>
pthread_t tid1,tid2;

	static int i=10;	
FILE *fp;
char buf[10];
void *f1(void *p)
{
	printf("pid of f1=%d\n",getpid());
//	printf("tid of f1=%p\n",pthread_self());
//strcpy(buf,"my");
fputs("my",fp);
}
void *f2(void *p)
{
	printf("pid of f2=%d\n",getpid());
//	printf("tid of f2=%p\n",pthread_self());
fputs("file",fp);
}


main()
{
	fp=fopen("myfile","w");
	pthread_create(&tid1,NULL,f1,NULL);
	pthread_create(&tid2,NULL,f2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	sleep(1);
	printf("pid of main=%d\n",getpid());
//	printf("tid of main=%p\n",pthread_self());
	
}
