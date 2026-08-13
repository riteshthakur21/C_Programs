#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[20],str2[20],i;
    //int=i;
    printf("\nEnter your name: ");
    scanf("%s",str1);
    for(i=0; str1[i]!='\0'; i++);
    i=0;
    printf("\nstr2 is %s",str2);   
    getch();
}
