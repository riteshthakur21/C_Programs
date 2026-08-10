#include<stdio.h>
#include<conio.h>

void main() {
    int n, i, j;

    // Ask user to enter the number
    printf("Enter the number: ");
    scanf("%d", &n);

    // Outer loop for the number of rows
    for(i = 1; i <= n; i++) {
        // Inner loop for printing spaces (for centering the pyramid)
        for(j = 1; j <= n - i; j++) {
            printf(" ");  // Print spaces
        }
        
        // Inner loop for printing the numbers
        for(j = 1; j <= (2*i - 1); j++) {
            printf("%d", i);  // Print the number
        }

        // Move to the next line after each row
        printf("\n");
    }
}
