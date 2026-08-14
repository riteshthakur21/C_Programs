/*#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s;
    printf("\nEnter a number:");
    scanf("\n%d",&n);
    s=0;
    i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            s=s+i;
        }
        i++;
    }
    s=s+n;
    printf("\nSum of the factor of given no. %d is %d",n,i);
    getch();
}*/

#include <stdio.h>

void main() 
{
    int n, i = 1, sum = 0;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Using while loop to find factors and sum them
    while (i <= n) {
        if (n % i == 0)   // Check if i is a factor of n
        {                 
            sum += i;     // Add factor to sum
        }
        i++;  // Increment i
    }

    // Print the sum of factors
    printf("Sum of all factors of %d is: %d\n", n, sum);
    //getch();
}
