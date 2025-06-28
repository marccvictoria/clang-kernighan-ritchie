#include <stdio.h>

int main()
{
    int input_line = 0;
    int read; // declare variable of type int since '\n' is considered an int, not char

    while ((read = getchar()) != EOF) // EOF signifies end of file. In windows OS, it is triggered by Ctrl+z, then enter.
    {
        if (read == '\n')
        {
            input_line++;
        }
    }
    printf("%i\n", input_line);

    return 0;
}