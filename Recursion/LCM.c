#include<stdio.h>
int lcm(int n1, int n2, int n3, int max)
{
    if(( max % n1 != 0 ) || ( max % n2  !=0 ) || ( max % n3 != 0))
    return lcm(n1,n2,n3,max+1);
    else
        return max;
}
void main()
{
    int a,b,c,max,r;
    printf("\nEnter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
        max=a;
    else if((b>a)&&(b>c))
        max=b;
    else
        max=c;
    r=lcm(a,b,c,max);
    printf("\nLcm of %d, %d & %d is %d",a,b,c,r);
}
