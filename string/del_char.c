#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20],ch;
    int i,j;
    //clrscr();
    printf("\nEnter a string: ");
    scanf("%s",str);
    printf("\nEnter the character to delete: ");
    ch= getche();
    for(i=0; str[i]!='\0'&& str[i]!=ch; i++);
    for(j=i; str[i]!='\0'; j++)
    {
        str[i]=str[j+1];
    }
    printf("\n%s after deleting %c",str,ch);
    getch();
}
    
     
    