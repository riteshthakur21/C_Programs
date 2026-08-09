#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i, target, found=0;
    //clrscr();
    printf("\nEnter array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nSearch for: ");
    scanf("%d", &target);

    for(i=0; i<n; i++)
    {
        if(arr[i]== target)
        {
            printf("\nFound at position %d", i+1);
            found=1;
        } 
    }
    if(found == 0)
    printf("\n%d Not found!", target);       
    getch();



}