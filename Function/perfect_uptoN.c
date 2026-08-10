/*#include<stdio.h>
#include<conio.h>
int perfect(int n)
{
    int i, sum = 0;
    for(i = 1; i <= n/2; i++) // Corrected loop start and condition
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    return (sum == n);
}

void main()
{
    int num,i;
    printf("\nEnter any number: ");
    scanf("%d", &num);
    printf("\nPerfect numbers up to %d are: ", num);
    for(i=1; i<=num; i++)
    {
        if(perfect(i))
        {
            printf("\nperfect number: ", i);
        }
    }
    getch();
}*/

#include<stdio.h>
#include<conio.h>

int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++) // Iterate up to n/2
    {
        if (n % i == 0)
        {
            sum += i; // Sum proper divisors (excluding n)
        }
    }
    return (sum == n); // Check if sum equals n
}

void main()
{
    int num, i;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nPerfect numbers up to %d are: ", num);
    for (i = 1; i <= num; i++) // Loop from 1 to num
    {
        if (perfect(i))
        {
            printf("\n%d ", i);
        }
    }
    getch();
}