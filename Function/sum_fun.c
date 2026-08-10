/*#include<stdio.h>
#include<conio.h>
int sum(int * p, int * q)
{
    int s=0;
    *p = *p*2;
    *q = *q*2;
     s = *p + *q;
     return s;
}
void main()
{
    int a,b,c;
    printf("\nEnter 2 number: ");
    scanf("%d%d",&a&b);
    printf("\nValue before function all are %d and %d",a,b);
    r=sum(&a,&b);
    printf("\nValue after function call are %d and %d",a,b);
    printf("\nSum =%d",r);
    getch();
}*/

#include<stdio.h>

int sum(int *p, int *q)
{
    int s = 0;
    *p = *p * 2;
    *q = *q * 2;
    s = *p + *q;
    return s;
}

int main()  // Corrected main return type
{
    int a, b, r;  // Declared 'r' variable
    printf("\nEnter 2 numbers: ");
    scanf("%d%d", &a, &b);  // Added comma between arguments
    printf("\nValue before function call are %d and %d", a, b);  // Fixed typo
    r = sum(&a, &b);
    printf("\nValue after function call are %d and %d", a, b);
    printf("\nSum = %d", r);
    getchar();  // More standard than getch()
    return 0;  // Added return statement
}