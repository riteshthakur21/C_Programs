/*#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,s;
    //clrscr();
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s=0;
        for(j=1; j<=1/2; j++)
        {
            if(i%j ==0)
            {
                s=s+1;
            }
        }
        s=s+1;
        if(2*i==s)
        {
            printf("\n%d", i);
        }
    }
    getch();
}*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j, sum;
    //clrscr(); // Uncomment if using a compiler/IDE that supports conio.h

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check each number from 1 to n
    for(i = 1; i <= n; i++)
    {
        sum = 0;
        // Sum all proper divisors of i
        for(j = 1; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        // If the sum of proper divisors equals i, it's perfect
        if(sum == i && i != 0)
        {
            printf("%d ", i);
        }
    }

    getch(); // Pause the screen (for compilers/IDEs that support conio.h)
}

