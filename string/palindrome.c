#include <stdio.h>

void main() {
    char str[100]; // Increased size for flexibility
    int i = 0, j, length = 0, flag = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Calculate string length manually
    while (str[length] != '\0') {
        length++;
    }
    
    j = length - 1;
    
    while (i < j) {
        if (str[i] != str[j]) {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    
    if (flag == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}
