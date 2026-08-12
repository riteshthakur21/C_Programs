/*#include<stdio.h>
#include<conio.h>
void main()
{
    char str[50],*ptr;
    ptr=str;
    printf("Enter a string for converting into upper case:\n");
    scanf("%s",ptr);
    while(ptr!='\0')
    {
        if((*ptr>=97)&&(*ptr<=122))
        {
            *ptr=*ptr-32;
        }
        ptr++;
    }
    printf("Upper case:%s\n",*str);
    getch();

}*/
#include<stdio.h>
#include<conio.h>

void main()
{
    char str[50], *ptr;
    ptr = str; // Pointer points to the start of str
    printf("Enter a string for converting into upper case:\n");
    scanf("%49s", ptr); // Limit input to prevent overflow

    while (*ptr != '\0') // Check the value pointed to by ptr
    {
        if ((*ptr >= 97) && (*ptr <= 122))
        {
            *ptr = *ptr - 32;
        }
        ptr++; // Move to next character
    }
    printf("Upper case: %s\n", str); // Pass str (pointer) to printf
    getch();
}