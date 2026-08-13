#include<stdio.h>
int sum(int n)
{
    if(n>1)
        return n+sum(n-1);
    else
        return n;
}
void main()
{
    int n, sum_n;
    printf("\nEnter any number: ");
    scanf("%d",&n);
    sum_n=sum(n);
    printf("\nsum the number upto %d is %d", n,sum_n);
    //gatch();
} 