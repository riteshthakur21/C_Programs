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
    if(rev==n)
    {
        printf("\nIt is a palindrome.");
    }
    else
    {
        printf("\nIt is not palindrome.");
    }
}
