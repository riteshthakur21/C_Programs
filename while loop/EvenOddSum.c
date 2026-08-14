#include<stdio.h>
#include<conio.h>
void main()
{
    int num, digit;
    int sum_even=0, sum_odd=0;
    printf("\nEnter numbers: ");
    scanf("%d", &num);
    while(num>0)
    {
        digit=num % 10;

        if(digit % 2 ==0)
        {
            sum_even = sum_even + digit;
        }
        else
        {
            sum_odd = sum_odd + digit;
        }
        num = num / 10;
    }
    printf("\nSum of even num is %d",sum_even);
    printf("\nSum of odd neum is %d",sum_odd);

}