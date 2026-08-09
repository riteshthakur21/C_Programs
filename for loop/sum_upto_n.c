#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s;
    printf("Enter a number: ");
    scanf("%d",&n); 
    for(i=1,s=0; i<=n; i++)
    {
        s=s+i;
    }
    printf("\nSum of all number is %d",s);
    getch();
}