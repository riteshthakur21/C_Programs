#include<stdio.h>                                  //using for loop

void main()                
{
    int n, i, even_sum = 0, odd_sum = 0;

    // Prompt user to enter the value of n
    printf("Enter a value for n: ");
    scanf("%d", &n);

    // Loop through all numbers from 1 to n
    for (i = 1; i <= n; i++) 
    {
        if (i % 2 == 0) { // Check if the number is even
            even_sum += i; // Add to even sum
        } else { // Otherwise, it's odd
            odd_sum += i; // Add to odd sum
        }
    }

    // Print the results
    printf("Sum of even numbers up to %d: %d\n", n, even_sum);
    printf("Sum of odd numbers up to %d: %d\n", n, odd_sum);
}
