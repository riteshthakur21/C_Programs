#include <stdio.h>

int main() 
{
    char ch;
    int count = 0, inWord = 0;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n') 
    {                                   // Read input character by character
        if (ch == ' ') 
        {
            inWord = 0;                // Set flag to indicate outside of a word
        } else if (inWord == 0) 
        {
            inWord = 1;                // New word detected
            count++;
        }
    }

    printf("Word count : %d\n", count);
    return 0;
}
