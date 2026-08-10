#include<stdio.h>
#include<conio.h>
int sum(int n1, int n2)
{
    int s;
    s=n1+n2;
    return s;
}
int sub(int n1, int n2)
{
    int d;
    d=n1-n2;
    return d;
}
int mul(int n1, int n2)
{
    int m;
    m=n1*n2;
    return m;
}
void main()
{
    int a, b, r;
    char ch;
    printf("Enter any two number: ");
    scanf("%d%d",&a,&b);
    printf("\n1.ADD");
    printf("\n2.SUB"); 
    printf("\n3.MUL");
    printf("\nEnter your choice: ");
    ch=getche();
    switch(ch)
    {
        case '1':
                r=sum(a,b);
                printf("\nsum of %d and %d is %d",a,b,r);
                break;
        case '2':
                r=sum(a,b);
                printf("\nsub of %d and %d is %d",a,b,r);
                break;
        case '3':
                r=sum(a,b);
                printf("\nmul of %d and %d is %d",a,b,r);
                break;        
        default:
            printf("\nYour choice is wronge\nPlease try again later");
    }
    getch();
}


