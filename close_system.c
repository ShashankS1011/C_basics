#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
int main()
{	
    int errno;
	int fd=open("abc.txt", O_RDONLY | O_CREAT);
	printf("fd=%d\n",fd);
	if(fd==-1)
	{
		printf("Error Number %d\n",errno);	
		perror("Program");				
	}
	return 0;
}