#include<stdio.h>
#include<conio.h>
void main()
{
    int bs,da,hra,ma,gs;
    //clrscr;
    printf("enter Basic salary: ");
    scanf("%d",&bs);
    da=bs*0.4;
    hra=bs*0.25;
    ma=bs*0.1;
    gs=bs+da+hra+ma;
    printf("\nBasic salary=%d",bs);
    printf("\nDA=%d",da);
    printf("\nHRA=%d",hra);
    printf("\nMA=%d",ma);
    printf("\nGross salary=%d",gs);
    getch();
}