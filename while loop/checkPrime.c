/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i,r,n,f=0;
    //clrscr();
    printf("\nEnter any number:");
    scanf("%d",&n);
    r=1;
    while(r*r<=n)
    r++;
    i=2;
    while(i<=n)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
        i++;
    }
    if(f==1)
        printf("\n%d is not prime.");
    else
        printf("\n%d is a prime number.");
    getch();
    
}*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
    } else if (n == 2) {
        printf("%d is a prime number.\n", n);
    } else if (n % 2 == 0) {
        printf("%d is not a prime number.\n", n);
    } else {
        int isPrime = 1;
        for (i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}