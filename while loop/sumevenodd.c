#include<stdio.h>                                  //using while loop

void main()
{
    int n, i, even_sum, odd_sum;

    // Initialize sums to 0
    even_sum = 0;
    odd_sum = 0;

    // Prompt the user for input
    printf("Enter a value for n: ");
    scanf("%d", &n);

    // Start the loop from 1
    i = 1;

    // Use while loop to calculate sums
    while(i <= n)
    {
        if(i % 2 == 0)  // Check if the number is even
        {
            even_sum += i;
        }
        else            // If not even, it is odd
        {
            odd_sum += i;
        }
        i++;
    }

    // Print the results
    printf("Sum of even numbers up to %d: %d\n", n, even_sum);
    printf("Sum of odd numbers up to %d: %d\n", n, odd_sum);
}
