#include<stdio.h>
#include<conio.h>
void main()
{
    int num[10], i, sum=0;
    //clrscr();
    printf("\nEnter 5 value for adding: ");
    for(i=0; i<5 ;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\nYour input are:");
    for(i=0; i<5 ;i++)
    {
        printf("%d",&num[i]);
        sum=sum+num[i];
    }    
    printf("\nSum of all values are: %d",sum);
    getch();
}