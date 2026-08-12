#include <stdio.h>
#include <conio.h>
int main() 
{
    char str[100];
    int vowels=0, cons=0, digits=0, i=0;
    printf("Enter string: ");
    gets(str);
    while(str[i] != '\0')
    {
        char c = str[i];
        if(c >= '0' && c <= '9') 
                digits++;
        else if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
        {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                vowels++;
            else 
                cons++;
        }
        i++;
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d", vowels, cons, digits);
    return 0;
}

  