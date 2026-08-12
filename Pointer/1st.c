//example of pointer 
#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,*p,*q;
    p=&n;
    q=&m;
    printf("\nEnter any number:");
    scanf("%d%d",p,q);
    printf("Your input number is %d\n",*p,*q);
    printf("The address of your input number is %p\n",p);
    printf("The address of your input number is %p\n",q);

    getch();
}