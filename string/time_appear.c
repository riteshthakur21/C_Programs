#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0, i;
    
    // Asking for user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a character to count its occurrences: ");
    scanf("%c", &ch);
    
    // Counting occurrences of the character
    for(i = 0; i < strlen(str); i++) {
        if(str[i] == ch) {
            count++;
        }
    }
    
    printf("The character '%c' appears %d times in the string.\n", ch, count);
    
    return 0;
}
