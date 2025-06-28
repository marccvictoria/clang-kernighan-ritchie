#include <stdio.h>

int main()
{
    int c = getchar(); //  	Declaration: int getchar(void)
    // getchar() reads a character or the first character from an input

    while (c != EOF) // allows to copy one char at a time until EOF
    {
        putchar(c); // Declaration: int putchar(int char)
        // putchar() prints that character to output
        c = getchar(); // reads the next character
    }
}

/*
#include <stdio.h>

int main()
{
    int c = getchar(); // inputs 'Hello'
    putchar(c); // outputs 'H'
}
*/