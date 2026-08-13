/*#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int i = 0;
    char ch;

    // Allocate memory for the string (1000 bytes)
    str = (char *)malloc(1000);
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter a string: ");
    
    // Read input character by character until newline or EOF
    while ((ch = getchar()) != '\n' && ch != EOF) {
        str[i++] = ch;
    }
    // Null-terminate the string
    str[i] = '\0';

    // Print the reversed string
    printf("Reversed string: ");
    for (i = i - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    free(str);
    return 0;
}*/

#include <stdio.h>  
int main() 
{  
    char str[100], temp;  
    int len = 0;  
    printf("Enter string: ");  
    gets(str);  
    while (str[len] != '\0') 
            len++;  
    for (int i = 0; i < len / 2; i++) 
    {  
        temp = str[i];  
        str[i] = str[len - i - 1];  
        str[len - i - 1] = temp;  
    }  
    printf("Reversed: %s", str);  
    return 0;  
}  