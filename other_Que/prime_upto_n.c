#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,r,f;
    //clrscr();
    printf("\nEnter value of n: ");
    scanf("%d",&n);
    printf("\n1 is a unique number. \n2 is the only even prime number. ");
    for(i=3; i<=n; i++)
    {
        f=0;
        r=1;
        while (r*r<=i)
        {
            r++;
        }
        for(j=2; j<=r; j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        printf("\n%d",i);
    }
    getch();
    
}