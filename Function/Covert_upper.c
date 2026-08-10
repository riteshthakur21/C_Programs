#include<stdio.h>
void u_case(char str[])
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=97)
        str[i]=str[i]-32;
    }
}
void main()
{
    char name[20];
    printf("\nEnter a string: ");
    scanf("%s",name);
    printf("\nInput string:-%s",name);
    u_case(name);
    printf("\nChanged string into upper case:%s",name);
    getchar();
}