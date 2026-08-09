#include<stdio.h>
#include<conio.h>
void main()
{
    int mat[3][3];
    int i,j;
    printf("\nInput the values for the matrix: ");
    for(i=0; i<3 ; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nvalues of your matrix are:\n ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",mat[i][j]);
        }
        printf("\n");
    }
    getch();
}