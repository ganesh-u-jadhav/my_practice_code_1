#include<stdio.h>
//#include<stdlib.h>
f1()
{
	printf("after the main fun\n");
}
main()
{
	on_exit(f1);
	printf("in main\n");
	printf("in main\n");
//exit(0);
}
