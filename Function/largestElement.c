/*#include<stdio.h>
#include<conio.h>
int max_array(int arr[], int r)
{
    int i,max;
    max=arr[0];
    for(i=0; i<n; i++)
    {
        if(max[i]>max)
        max=arr[i];
    }
    return max;
}
void main()
{
    int num[100],s,r,i;
    printf("\nEnter the size of array:");
    scanf("%d",&s);
    printf("intput numbers:");
    for(i = 0; i < s; i++)
    {
        scanf("%d",&num[i]);
    }
    r=max_array(num,s);
    printf("\nlargest element of the array is %d",r);
    getch();    
}*/

#include<stdio.h>
#include<conio.h>

int max_array(int arr[], int r)
{
    int i, max;
    max = arr[0];
    for(i = 0; i < r; i++)  // Changed 'n' to 'r'
    {
        if(arr[i] > max)    // Corrected from max[i] to arr[i]
            max = arr[i];
    }
    return max;
}

void main()
{
    int num[100], s, r, i;
    printf("\nEnter the size of array: ");
    scanf("%d", &s);
    printf("Input numbers: ");
    for(i = 0; i < s; i++)
    {
        scanf("%d", &num[i]);
    }
    r = max_array(num, s);
    printf("\nLargest element of the array is %d", r);
    getch();    
}