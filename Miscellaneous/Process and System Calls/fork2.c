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
    // the number of hello = # of processes created (2^n)
    fork();
    fork();
    fork();
    printf("hello\n");
    return 0;

    /*
       L1       // There will be 1 child process
    /     \     // created by line 1.
  L2      L2    // There will be 2 child processes
 /  \    /  \   //  created by line 2
L3  L3  L3  L3  // There will be 4 child processes
                // created by line 3
    */
}