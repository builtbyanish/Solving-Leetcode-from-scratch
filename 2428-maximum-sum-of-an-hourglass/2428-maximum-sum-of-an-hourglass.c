int maxSum(int** grid, int gridSize, int* gridColSize)
{
    int max = 0;

    for (int i = 0; i < gridSize - 2; i++)
    {
        for (int j = 0; j < gridColSize[0] - 2; j++)
        {
            int sum = 0;
            sum += grid[i][j];
            sum += grid[i][j + 1];
            sum += grid[i][j + 2];

            sum += grid[i + 1][j + 1];

            sum += grid[i + 2][j];
            sum += grid[i + 2][j + 1];
            sum += grid[i + 2][j + 2];

            if (sum > max)
                max = sum;
        }
    }

    return max;
}