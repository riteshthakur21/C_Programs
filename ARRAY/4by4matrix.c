#include<stdio.h>
#include<conio.h>
void main()
{
    int mat[4][4];
    int i,j;
    printf("\nInput the values for the matrix: ");
    for(i=0; i<4 ; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nvalues of your matrix are:\n ");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\t%d",mat[i][j]);
        }
        printf("\n");
    }
    getch();
}