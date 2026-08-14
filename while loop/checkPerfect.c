/*#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    s=0;
    i=1;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            s=s+i;
            i++;
        }
        s=s+n;
        if(s==2*n)
        {
            printf("%d is a perfect number",n);
        }
        else
        {
            printf("%d is not a perfect number",n);
        }
        getch();
    }
    
}*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}