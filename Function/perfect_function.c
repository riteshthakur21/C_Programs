/*#include<stdio.h>
#include<conio.h>
int perfect(int n)
{
    int i, sum=0;
    for(i=0; i<=n/2; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    sum=sum+n;
    if(sum==2*n)
        return 1;
    else
        return 0;
}
void main()
{
    int num;
    printf("\nEntre any number: ");
    scanf("%d",&num);
    if(perfect(num))
    {
        printf("\n%d is perfect number.",num);
    }
    else
    {
        printf("\n%d is not perfect number.",num);
    }
    getch();
}*/
#include<stdio.h>
#include<conio.h>

int perfect(int n)
{
    int i, sum = 0;
    for(i = 1; i <= n/2; i++) // Corrected loop start and condition
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    sum += n;
    return (sum == 2 * n);
}

void main()
{
    int num;
    printf("\nEnter any number: ");
    scanf("%d", &num);
    if(perfect(num))
    {
        printf("\n%d is a perfect number.", num);
    }
    else
    {
        printf("\n%d is not a perfect number.", num);
    }
    getch();
}