#include<stdio.h>
#include<conio.h>

void main()
{
    int p,c,m;
    /*clrscr(); using in torbo C */
    printf("Enter marks of 3 paper");
    scanf("%d%d%d",&p,&c,&m);
    printf("\nMarks in Physics = %d",p);
    printf("\nMarks in Chemistry = %d",c);
    printf("\nMarks in Maths = %d",m);
    printf("\nTotal Marks = %d",p+c+m);
    printf("\nAverage Marks  = %d",(p+c+m)/3);
    getch();
}