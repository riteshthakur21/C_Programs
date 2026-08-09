#include<stdio.h>
#include<conio.h>
void main()
{
    int num[5], i, max, min;
    //clrscr();
    printf("\nEnter some number: ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    min=num[0];
    for(i=0; i<5; i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
    }
    for(i=0; i<5; i++)
    {
        if(min>num[i])
        {
            min=num[i];
        }
    }
    printf("\nMax is %d",max);
    printf("\nMin is %d",min);
    getch();
}