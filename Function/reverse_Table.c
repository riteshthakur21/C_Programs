#include<stdio.h>
#include<conio.h>

void table(int n)
{
    int i;
    for(i=0; i<=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
int reverse(int n1)
{
    int rev=0, r;
    int sign = 1;

    if(n1 < 0)
    {
        sign = 1;
        n1 = n1;

    }
    while(n1 != 0)
    {
        r=n1%10;
        rev= rev * 10 + r;
        n1=n1/10; 
    }
    return rev * sign;
     
}

void main()
{
    int num;
    printf("\nEnter any number: ");
    scanf("%d",&num);
    table(num);
    printf("Enter any number to be reversed: \n");
    scanf("%d",&num);
    printf("Reverse of %d is %d\n",num,reverse(num));
    getch();
}
