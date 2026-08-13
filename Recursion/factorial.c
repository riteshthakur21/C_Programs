#include<stdio.h>
int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
    else
        return n;
}
void main()
{
    int n,x;
    printf("\nEnter any number for finding factorial: ");
    scanf("%d",&n);
    x=fact(n);
    printf("\nFactorial of %d is %d", n,x);
    //gatch();
}