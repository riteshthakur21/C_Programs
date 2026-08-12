/*#include<stdio.h>
#include<conio.h>
void main()
{
    char *p, *q, *r;
    int c=0,l;
    printf("Enter a string for reverse:\n");
    scanf("%s",p);
    while(*p!='\0')
    {
         p++;
         c++;
    }
    p--;
    l=c;
    while(c>0)
    {
        *r=*q;
        r++;
        p--;
        c--;
    }
    *r='\0';
    r=r-l;
    printf("Reverse string:%s",r);
    printf("address of your input string:%u",p);
    printf("address of your resverse string:%u",r);
    getch();


}*/

#include <stdio.h>
#include <conio.h>

void main() {
    char str[100], reversed_str[100];
    char *p = str;
    char *r = reversed_str;
    int c = 0, l;

    printf("Enter a string for reverse:\n");
    scanf("%99s", str); // Safely read input into str

    // Calculate the length of the string and position p at the last character
    while (*p != '\0') {
        p++;
        c++;
    }
    p--; // Move p back to the last valid character before '\0'
    l = c;

    // Reverse the string by copying from p to reversed_str
    while (c > 0) 
    {
        *r = *p;
        r++;
        p--;
        c--;
    }
    *r = '\0'; // Null-terminate the reversed string

    r = reversed_str; // Reset r to the start of reversed_str

    printf("Reverse string: %s\n", reversed_str);
    printf("Address of your input string: %u\n", (void*)str);
    printf("Address of your reverse string: %u\n", (void*)reversed_str);
    getch();
}