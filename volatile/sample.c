#include<stdio.h>
int x=1;
int *ptr=&x;
main()
{
	while(x)
	{
		printf("aaaa\n");
		(*ptr)--;
	}
}
