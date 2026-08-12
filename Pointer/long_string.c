/*#include <stdio.h>
#include <string.h>

int main() {
    char main_str[1000];
    char word[100];
    char *found;
    int count = 0;

    printf("Enter a long string: ");
    fgets(main_str, sizeof(main_str), stdin);
    // Remove trailing newline
    size_t len = strlen(main_str);
    if (len > 0 && main_str[len - 1] == '\n') {
        main_str[len - 1] = '\0';
    }

    printf("Enter the word to search: ");
    scanf("%99s", word); // Read up to 99 characters to prevent overflow

    // Check if the word is empty
    if (strlen(word) == 0) {
        printf("Invalid word.\n");
        return 1;
    }

    char *current = main_str;
    while ((found = strstr(current, word)) != NULL) {
        int position = found - main_str;
        printf("Word found at position: %d\n", position);
        current = found + 1; // Move past the current match
        count++;
    }

    if (count == 0) {
        printf("The word is not present in the string.\n");
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    char main_str[1000];
    char word[100];
    int count = 0;

    // Input handling
    printf("Enter a long string: ");
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF && i < 999) {
        main_str[i++] = c;
    }
    main_str[i] = '\0';

    printf("Enter the word to search: ");
    scanf("%99s", word);

    // Check empty word
    if (word[0] == '\0') {
        printf("Invalid word.\n");
        return 1;
    }

    // Find word length
    int word_len = 0;
    while (word[word_len] != '\0') word_len++;

    // Simple substring search
    for (int pos = 0; main_str[pos] != '\0'; pos++) {
        int match = 1;
        for (int j = 0; j < word_len; j++) {
            if (main_str[pos + j] != word[j] || main_str[pos + j] == '\0') {
                match = 0;
                break;
            }
        }
        
        if (match) {
            printf("Word found at position: %d\n", pos);
            count++;
            pos += word_len - 1;  // Skip past this match
        }
    }

    if (count == 0) {
        printf("The word is not present in the string.\n");
    }

    return 0;
}