#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
/*
fork(): Fork system call
- used for creating a child process which runs concurrently with the parent process
- takes no parameters and return an int value
*/

int main()
{
    // make two process which run same
    // program after this instruction
    pid_t p = fork(); // pid_t data ttype: for storing process IDs, stores the return value of fork()
    if (p < 0)
    {
        perror("fork fail");
        exit(1);
    }
    printf("Hello world!, process_id(pid) = %d \n", getpid());
    return 0;
}