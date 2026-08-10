int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes)
{
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int** ans = malloc(cols * sizeof(int*));
    *returnColumnSizes = malloc(cols * sizeof(int));

    for (int i = 0; i < cols; i++)
    {
        ans[i] = malloc(rows * sizeof(int));
        (*returnColumnSizes)[i] = rows;

        for (int j = 0; j < rows; j++)
        {
            ans[i][j] = matrix[j][i];
        }
    }

    *returnSize = cols;
    return ans;
}