#include<stdio.h>

void main()
{
    int i, s, n; //sum of integer upto n

    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    s = 0;
    i = 1; 
    
    
    while(i <= n)
    {
        s = s + i; 
        i++;       
    }
    
    printf("The sum of the numbers: %d\n", s);
}

