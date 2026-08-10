#include<stdio.h>
#include<conio.h>
#define pi 3.14159
void main()
{
    float r,h,v;
    //clrscr();
    printf("enter the radius of the cylinder: ");
    scanf("%f",&r);
    printf("enter the haight of the cylinder: ");
    scanf("%f",&h);
    v = pi*r*r*h;
    printf("\nThe vol. of the cylinder is %2f cubic units ", v);
    getch();

}