#include <stdio.h>  
void main() 
{  
    int i;
    for (i = 0; i <= 255; i++)  
        printf("%4d= %c\t", i, i);  
    getch();  
}  