
#include <stdio.h>

void main() 
{
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    while (i <= n) 
    {  // Check all numbers from 1 to n
        if (n % i == 0)
        {
            printf("%d ", i);  // Print factor
        }
        i++;  // Increment i
    }

    printf("\n");
}
