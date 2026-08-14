#include<stdio.h>
#include<conio.h>
void main()
{   
    int l,b;
    printf("enter the value of l and b");
    scanf("%d%d",&l,&b);
    printf("\nArea=%d", l*b);
    printf("\nPerimeter=%d", 2*(l*b));
    getch();
}