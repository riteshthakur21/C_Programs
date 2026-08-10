#include<stdio.h>
#include<conio.h>
// int main()
// {
//     double bs,da,hra,ma,gs,ns,tax;
//     //clrscr
//     printf("\nEnter the basic salary: ");
//     scanf("%lf", &bs);
//     da = bs * 0.4;
//     hra = bs * 0.25;
//     ma = bs * 0.1;
//     gs = bs + da + hra + ma;
//     if (gs >= 60000)
//     {
//         tax = gs * 0.4;
//     }
//     else if ((gs >= 45000)&&(gs < 60000))
//     {
//         tax = gs * 0.25;
//     }
//     else if ((gs >= 30000)&&(gs < 45000))
//     {
//         tax = gs * 0.1;
//     }
//     else
//     {
//         tax = 0;
//     }

//     ns = gs - tax;
//     printf("\nBasic salary %.2lf", bs);
//     printf("\nDA %.2lf", da);
//     printf("\nHRA %.2lf", hra );
//     printf("\nMA %.2lf", ma);
//     printf("\ngross salary %.2lf", gs);
//     printf("\nTax %.2lf", tax);
//     printf("\nNet salary %.2lf", ns);
//     getch();
int main()
{
    double bs, da, hra, ma, gs,ns,tax;
    printf("\nEnter teh basic salary: ");
    scanf("%lf",&bs);
    da= bs*0.4;
    hra= bs*0.25;
    ma= bs*0.1;
    gs= bs+da+hra+ma;
    if (gs>=60000)
    {
        tax= gs*0.4;
    }
    else if ((gs>=45000)&&(gs<60000))
    {
        tax= gs*0.25;
    }
    else if ((gs>=30000)&&(gs<45000))
    {
        tax= gs*0.1;
    }
    else
    {
        tax=0;
    }
    ns = gs - tax;
    printf("\nBasic salary %.2lf", bs);
    printf("\nDA %.2lf", da);
    printf("\nHRA %.2lf", hra);
    printf("\nMA %.2lf", ma);
    printf("\nGross salary %.2lf", gs);
    printf("\nTax %.2lf", tax);
    printf("\nNet salary %.2lf", ns);
    getche();
}
