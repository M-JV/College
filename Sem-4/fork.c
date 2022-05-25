#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    pid_t p;
    p = fork();

        if(p == -1){
            printf("Error!\n");
        }

        else if(p == 0){
            printf("We are in child process!\n");
        }

        else
            printf("We are in parent process!\n");
}

