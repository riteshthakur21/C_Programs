#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20],i;
    //int=i;
    printf("\nEnter your name: ");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    printf("\nLength of the %s is %d",str,i);
    getch();
    
}