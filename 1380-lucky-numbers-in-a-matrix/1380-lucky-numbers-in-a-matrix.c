int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize,
                  int* returnSize)
{
    int *ans = malloc(matrixSize * sizeof(int));
    int count = 0;

    for (int i = 0; i < matrixSize; i++)
    {
        int min = matrix[i][0];
        int col = 0;

        for (int j = 1; j < matrixColSize[i]; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                col = j;
            }
        }

        int lucky = 1;

        for (int k = 0; k < matrixSize; k++)
        {
            if (matrix[k][col] > min)
            {
                lucky = 0;
                break;
            }
        }

        if (lucky)
            ans[count++] = min;
    }

    *returnSize = count;
    return ans;
}