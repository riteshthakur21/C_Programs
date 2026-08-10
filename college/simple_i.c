#include<stdio.h>
#include<conio.h>
/*void main()
{
    float p,r,t,si;
    //clrscr();
    printf("enter the value of P,R and T(in year)");
    scanf("%f%f%f", &p, &r, &t);
    si= (p*r*t)/100;
    printf("\nThe Simple interst is %2f",si);
    getch();
}*/
void main()
{
    float p,r,t,si;
    printf("\nenter the value of P,R a T(years): ");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("\nthe simple interst is %2f", si);
    getche();
}
