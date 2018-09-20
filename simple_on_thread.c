#include<stdio.h>
#include<pthread.h>
#include<limits.h>
pthread_t tid1,tid2;
pthread_key_t key=10,key1,key2;

static int i=10;	
void *f1(void *p)
{
	printf("pid of f1=%d\n",getpid());
	printf("tid of f1=%p\n",pthread_self());
	printf("addtress of f1=%p\n",f1);
	printf("address of i=%p\n",&i);
	//	while(1);	
int size = PTHREAD_STACK_MIN;// + 0x4000;
	printf("size1=%u\n",size);

}
void *f2(void *p)
{
	printf("pid of f2=%d\n",getpid());
	printf("tid of f2=%p\n",pthread_self());
	printf("addtress of f2=%p\n",f2);
	printf("address of i=%p\n",&i);
	//	while(1);
	int size = PTHREAD_STACK_MIN + 0x4000;
	printf("size f2=%u\n",size);

}


main()
{
	pthread_create(&tid1,NULL,f1,NULL);
	pthread_create(&tid2,NULL,f2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	pthread_key_create(&key,NULL);
	pthread_key_create(&key1,NULL);
	pthread_key_create(&key2,NULL);
	sleep(1);
	printf("key=%d\n",key);
	printf("key_1=%d\n",key1);
	printf("key_2=%d\n",key2);

	pthread_key_delete(key);
	sleep(2);
	pthread_key_create(&key,NULL);
	printf("key==%d\n",key);
	printf("pid of main=%d\n",getpid());
	printf("tid of main=%p\n",pthread_self());
	printf("tid of main=%p\n",tid1);
	printf("tid of main=%p\n",tid2);
	printf("addtress of f2=%p\n",main);
	printf("address of i=%p\n",&i);

}
