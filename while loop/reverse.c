#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,rev,t;
    printf("\nEnter number for reverse:");
    scanf("\n%d",&n);
    t=n;
    rev=0;
    while(t>0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }  
    printf("\nReverse number %d is %d",n,rev);
}

/*#include <stdio.h>

void main() {
    int n, r, rev, t;

    printf("Enter a number to reverse: ");
    scanf("%d", &n);  // Corrected scanf

    t = n;
    rev = 0;

    while (t > 0) {
        r = t % 10;        // Extract last digit
        rev = rev * 10 + r; // Add digit to reverse number
        t = t / 10;        // Remove last digit
    }

    printf("Reverse of %d is: %d\n", n, rev);
}*/
