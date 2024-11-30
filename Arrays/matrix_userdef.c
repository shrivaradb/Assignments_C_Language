#include <stdio.h>

int main()
{
    // Variables to store dimensions of matrices
    int row1, row2, col1, col2, i, j, k;
    
    // Declare result matrix (will be resized later)
    int result[row1][col2];

    // Input dimensions of Matrix A
    printf("Enter the number of 'Rows' for Matrix A: ");
    scanf("%d", &row1);

    printf("Enter the number of 'Columns' for Matrix A: ");
    scanf("%d", &col1);

    // Input dimensions of Matrix B
    printf("Enter the number of 'Rows' for Matrix B: ");
    scanf("%d", &row2);

    printf("Enter the number of 'Columns' for Matrix B: ");
    scanf("%d", &col2);

    // Declare matrices A and B dynamically based on input sizes
    int matrixa[row1][col1];
    int matrixb[row2][col2];

    // Ensure that matrix multiplication is possible
    if (col1 != row2) 
    {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 1;    
    }

    // Input elements of Matrix A
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("Enter values for matrix 'A'[%d][%d]: ", i, j);
            scanf("%d", &matrixa[i][j]);
        }
    }

    // Input elements of Matrix B
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("Enter values for matrix 'B'[%d][%d]: ", i, j);
            scanf("%d", &matrixb[i][j]);
        }
    }

    // Print Matrix A
    printf("\nMatrix A (%d x %d): \n", row1, col1);
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d   ", matrixa[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B (%d x %d): \n", row2, col2);
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d   ", matrixb[i][j]);
        }
        printf("\n");
    }

    // Initialize all elements of the result matrix to 0
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            for (k = 0; k < col1; k++) { 
                result[i][j] += matrixa[i][k] * matrixb[k][j];
            }
        }
    }

    // Print the resultant matrix
    printf("\nResultant Matrix (%d x %d):\n", row1, col2);
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
