// execDemo.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    // A null terminated array of character pointers
    char *args[] = {"/usr/bin/ls", "-l", NULL}; // $PATH
    execvp(args[0], args);
    /*
    Syntax:
    int execvp (const char *file, char *const argv[]);

    - All statements are ignored after execvp() call as this whole
    process(execDemo.c) is replaced by another process (EXEC.c)
    */
    printf("Failed to Execute\n");

    return 0;
}