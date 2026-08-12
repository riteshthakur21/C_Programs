#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[50], str2[50], result[100];
    char *p=str1, *q=str2, *r=result;
    printf("enter 2 string:\n");
    scanf("%49s%49s",str1,str2);     //Limit input to prevent overflow

    while(*p !='\0')
    {
        *r=*p;
        p++;
        r++;
    }
    while(*q !='\0')
    {
        *r=*q;
        q++;
        r++;
    }
    *r='\0';
    printf("After cocatenate:%s",result);
    getch();


}