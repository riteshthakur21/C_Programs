#include <stdio.h>

int main() 
{
    int m, n, p, n_b;

    // Input dimensions
    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &n_b, &p);               //colunms(n) of matrix A is equal to the rows(n_b) of matrix B 
                                        
    if (n != n_b) 
    {
        printf("Matrices cannot be multiplied.\n");
        return 1;
    }

    // Declare matrices using VLAs (size known at runtime)
    int A[m][n];
    int B[n][p];
    int C[m][p];  // Result matrix
    int i,j,k;

    // Input matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++)
    {    
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    
    // Input matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < n; i++)
    {   
        for (j = 0; j < p; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    
    
    printf("Mul matrix A and matrix B:\n");
    printf("your marix A is :\n");
    for (i = 0; i < m; i++)
    {   
        for (j = 0; j < n; j++)
        {    
            printf("%d\t", A[i][j]);
        } 
        printf("\n");
    }
    printf("\n");
    printf("your marix B is :\n");
    for (i = 0; i < n; i++)
    {    
        for (j = 0; j < n; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    // Print result
    printf("Resultant Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++)
            printf("%d\t ", C[i][j]);
        printf("\n");
    }

    return 0;
}