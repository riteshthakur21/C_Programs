/*#include<stdio.h>               
#include<conio.h>
void main()
{
    int n,s,r,t;
    printf("\nEnter digits for sumation: ");
    scanf("\n%d",&n);
    t=n;
    s=0;   
    while(t>0)
    {
        r=t%10;
        s=s+r;
        t=t/10;
    }
    printf("\nSumation of digit %d is %d",n,s);
    //getch();

}*/

#include <stdio.h>

void main() {
    int n, s, r, t;

    printf("Enter digits for summation: ");
    scanf("%d", &n);

    t = n;
    s = 0;   

    // Corrected while loop (no semicolon)
    while (t > 0) {
        r = t % 10;  // Extract last digit
        s = s + r;   // Add digit to sum
        t = t / 10;  // Remove last digit
    }

    printf("Summation of digits of %d is: %d\n", n, s);
}
