#include <stdio.h>  
#include <stdlib.h>  

int main(int argc, char *argv[]) {  
    if (argc != 2) {  
        printf("Usage: %s <word_count>", argv[0]);  
        return 1;  
    }  

    FILE *file = fopen(argv[1], "r");  
    if (file == NULL) {  
        printf("File not found!");  
        return 1;  
    }  

    int count = 0;  
    char ch;  
    while ((ch = fgetc(file)) != EOF) {  
        if (ch == ' ' || ch == '\n') count++;  
    }  

    printf("Total words: %d", count);  
    fclose(file);  
    return 0;  
}  
