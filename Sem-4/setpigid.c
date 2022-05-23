#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
 int main()
 {
     if(setpgid(getpid(),0)== -1) {
         perror("setpgid");
     }
     printf("%d belongs to process group %d\n",getpid(), getpgrp());
     return EXIT_SUCCESS;
 }