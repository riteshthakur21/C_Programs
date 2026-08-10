#include<stdio.h>
void *append(char str1[], char str2[])
{
    int i,j;
    char *p;
    for(i=0; str1[i]!='\0'; i++)
    {
        *p=str1[i];
        p++;
    }
    for(i=0; str2[j]!='\0'; i++)
    {
        *p=str2[j];
        p++;
    }
    *p='\0';
    p=p-i;
    p=p-j;
    return p;
}
void main()
{
    char name1[20], name2[20], *ptr;
    printf("\nEnter 2 string:");
    scanf("%s%s",name1,name2);
    ptr=append(name1, name2);
    printf("\nappend string:%s", ptr);
    getchar();

}