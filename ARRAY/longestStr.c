#include<stdio.h>
#include<conio.h>
void main()
{
    char str[5][20];
    int i, j, l=0;
    printf("\nEnter 5 string: ");
    for(i=0; i<5; i++)
    {
        scanf("\n%s",str[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=0; str[i][j]!='\0'; j++)
        if(j>l)
        l=j;
    }
    l++;
    printf("\nlength of longest string is %d",l);
    getch();

    
}