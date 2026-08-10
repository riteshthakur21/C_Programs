#include<stdio.h>
#include<conio.h>
void main()
{
    double c,f;
    printf("enter the temp. in celcius: ");
    scanf("%lf%lf", &c,&f);
    f = (c*9/5)+32;
    c = (f-32)*5/9;
    printf("\nThis is the farenhite %lf",f);
    printf("\nThis is the celcius %lf",c);
    getch();
}