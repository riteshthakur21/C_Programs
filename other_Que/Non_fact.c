#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("\nEnter any number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)  
    {
        if(n%i==0)
        continue;
        printf("\n%d",i);
    }
    getch();

}