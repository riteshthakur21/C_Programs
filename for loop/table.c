#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    printf("\nHere is the table of %d: ",n);
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d = %d",n,i,n*i);
       
    }
    getch();
}
