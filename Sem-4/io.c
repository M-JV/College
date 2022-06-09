#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
 int n, fd;
 char buf[50];//buffer array
 fd=open("hello.txt", O_RDONLY);//file descriptor
 n=read(fd , buf, 50);// to count buffer values
 write(1 , buf, 50);
}
