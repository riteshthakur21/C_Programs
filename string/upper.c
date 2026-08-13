#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20];
    int i;
    //clrscr();
    printf("\nEnter a string: ");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i>='a'])&&(str[i<='z']))
            str[i]=str[i]-32;

        else if((str[i>='A'])&&(str[i<='Z']))
            str[i]=str[i]+32;
    }
    printf("\nUpper & lower case string is %s", str);
    getch();
}