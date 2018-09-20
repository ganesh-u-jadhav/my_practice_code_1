#include<stdio.h>
#include<unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
//       #include <sys/stat.h>
#include <fcntl.h>
main(int argc,char **argv)
{
	int fd,n;
	fd=open(argv[1],O_RDWR);
	if(fd==-1)
		perror("chmode\n");
	n=fchmod(fd,0444);
	if(n==-1)
		perror("fchmod\n");

}

