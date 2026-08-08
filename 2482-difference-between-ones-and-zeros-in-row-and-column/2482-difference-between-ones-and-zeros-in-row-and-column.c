int** onesMinusZeros(int** grid, int gridSize, int* gridColSize,
                     int* returnSize, int** returnColumnSizes)
{
    int m = gridSize;
    int n = gridColSize[0];

    int rowOnes[m];
    int colOnes[n];

    for (int i = 0; i < m; i++)
        rowOnes[i] = 0;

    for (int j = 0; j < n; j++)
        colOnes[j] = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                rowOnes[i]++;
                colOnes[j]++;
            }
        }
    }

    int **ans = malloc(m * sizeof(int *));
    *returnColumnSizes = malloc(m * sizeof(int));

    for (int i = 0; i < m; i++)
    {
        ans[i] = malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;

        for (int j = 0; j < n; j++)
        {
            int rowZeros = n - rowOnes[i];
            int colZeros = m - colOnes[j];

            ans[i][j] = rowOnes[i] + colOnes[j]
                      - rowZeros - colZeros;
        }
    }

    *returnSize = m;

    return ans;
}