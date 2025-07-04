#include <stdio.h>

int main()
{
    char *s = "HI!";    // pointer s that points to the first char 'H' of string lit "HI"
    printf("%c\n", *s); // %c -> prints H | %d -> prints 72 (ASCII)
    /*
     printf("%s\n", s) -> "HI!" | prints the string pointed to by s, character-by-character until
     s is a pointer to string
     s is a char* unlike s* which is a char
     Start at the memory address s, and print characters until you hit the null terminator ('\0').
     In C, strings are just pointers to the first character.
     C relies on '\0' — to know when to stop printing.
    */
}