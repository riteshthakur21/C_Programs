#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Read a string from the user (up to 99 characters)
    printf("Enter a string: ");
    scanf("%s", str);

    // Manually determine the length of the string (until we hit '\0')
    while (str[length] != '\0') {
        length++;
    }

    // Print prefixes of the string
    for(int i = 0; i < length; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
