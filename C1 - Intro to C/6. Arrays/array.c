// a program that counts digits, whitespace, and other characters from user's input

#include <stdio.h>

int main()
{
    int i, c, whitespace, other_char;
    int ndigits[10]; // to declare size
    /* common mistake when declaring size of an array:
    int ndigits[] = {}
    ndigits[10];*/

    // initialization
    whitespace = other_char = 0;

    // Filling up garbage values
    for (i = 0; i <= 9; ++i)
    {
        ndigits[i] = 0; // ndigits[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            ++whitespace;
        }
        else if (c >= '0' && c <= '9')
        {
            ++ndigits[c - '0']; // equivalent to ndigits[1] = ndigits[1] + 1
            /*ndigits[1] left refers to the index to write to while ndigits[1] right refers to the value of
            the index*/
        }
        else
        {
            ++other_char;
        }
    }

    int ndigits_size = sizeof(ndigits) / sizeof(ndigits[0]); // sizeof() return the size in byte; int has 4 byte

    for (i = 0; i <= (ndigits_size - 1); ++i)
    {
        printf("%i ", ndigits[i]);
    }
    printf("\n");
    printf("Whitespace Count: %i\n", whitespace);
    printf("Other Characters Count: %i\n", other_char);
}