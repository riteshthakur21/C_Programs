#include <stdio.h>
#include <conio.h>

int main() 
{
    int n, i, j;
    
    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Loop to print each row of the pyramid
    for(i = 1; i <= n; i++) 
    {
        // Loop to print numbers from 1 to i in the current row
        for(j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    
    return 0;
}


