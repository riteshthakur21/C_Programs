#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[3][3], arr2[3][3], sum_arr[3][3];
    int i,j;
    printf("Enter the values of 1st matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the values of 2nd matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }   
    printf("your 1st matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",arr1[i][j]);
        }
        printf("\n");
    }
    printf("your 2nd matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",arr2[i][j]);
        }
        printf("\n");
    }  
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
           sum_arr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Sum of both matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",sum_arr[i][j]);
        }
        printf("\n");
    } 
    printf("your 1st transpose matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",arr1[j][i]);
        }
        printf("\n");
    }  
    printf("your 2nd transpose matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",arr2[j][i]);
        }
        printf("\n");
    }  
    printf("Sum of both transpose matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",sum_arr[j][i]);
        }
        printf("\n");
    }  
        
    getch();


}