// Reads lines, words, and characters

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, line_count, word_count, char_count, state; // reads a character

    state = OUT;

    line_count = word_count = char_count = 0; // initializing a variable is important to prevent printing garbage values

    while ((c = getchar()) != EOF) // allows to copy one char at a time until EOF
    {
        if (c == '\n') // if statements run independently; else if = only 1 block runs, may skip logic
        {
            ++line_count;
        }
        if (c != '\n')
        {
            ++char_count;
        }
        /* Logic Behind Word Count
        - variable state record whether the program is inside the word or not (1 and 0 respectively)
        - initially it is not a word, thus assigned the value OUT (the purpose of initialization here is
        first, semantically, we assume we are outside a word, we don't want to count until a first
        whitespace appears. Secondly, for safety, which is to prevent garbage values)
        - "He..." -> as I am typing, no word count is triggered
        - "Hello " -> " " signals the end of a word, thus state = OUT;
        - The program triggers the else if condition (if state == OUT), whereby it executes only after
        the preceding if statement evaluates to false.
        - State then procedes to IN marking the start of new word if a non-whitespace character is entered.
        - Finally, incrementing the word count by 1.
        */
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            if (c != ' ' || c != '\n' || c != '\t')
            {
                state = IN;
                ++word_count;
            }
        }
    }
    printf("Line count: %i\nWord count: %i\nCharacter Count: %i\n", line_count, word_count, char_count);
}
