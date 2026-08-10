#include<stdio.h>
#include<conio.h>
int main()
{
    int a1,a2,a3,sum;
    printf("1st, 2nd & 3rd angle: ");
    scanf("%d%d%d", &a1,&a2,&a3);
    /*printf("2nd angle: ");
    scanf("%d", &a2);
    printf("3rd angle: ");
    scanf("%d", &a3);*/

    sum = a1+a2+a3;

    if(sum == 180 && a1 > 0 && a2 > 0 && a3 > 0)
    {
        if(a1 == 90 || a2 == 90 || a3 == 90)
        {
            printf("\nThis is the right angled triangle");
        }
        else if ( a1 > 90 || a2 > 90 || a3 >90)
        {
            printf("\nThis is the obtues angled triangle");
        }
        else
        {
            printf("\nThis is acute angled triangle");
        }
    }
    else
    {
        printf("\nDoes not a valid triangle");
    }



}