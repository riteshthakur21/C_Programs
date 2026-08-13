/*#include<stdio.h>

#include<conio.h>
void main()
{
    char str[30];
    int i=0,j=1;
    printf("\nEnter your full name: ");
    scanf("%s",&str);
    gets(str);
    for(i=0,j=0; str[i]!='\0'; i++)
    {
        if(str[i]==32)
        {
            printf("%c",str[j]);
            j=i+1;
        }
    }
    while(str[j]!='\0')
    {
        printf("%c",str[j]);
        j++;
    }
    

    getch();
}
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char *words[100];
    int count = 0;
    
    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    // Tokenize the string using space as a delimiter
    char *token = strtok(str, " ");
    while(token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }
    
    // For every word except the last, print only the first character followed by a space
    for (int i = 0; i < count - 1; i++) {
        printf("%c ", words[i][0]);
    }
    
    // Print the last word in full
    if (count > 0) {
        printf("%s", words[count - 1]);
    }
    
    printf("\n");
    return 0;
}

