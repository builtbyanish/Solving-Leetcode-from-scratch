int** largestLocal(int** grid, int gridSize, int* gridColSize,
                   int* returnSize, int** returnColumnSizes) {

    int n = gridSize;

    *returnSize = n - 2;

    *returnColumnSizes = malloc((n - 2) * sizeof(int));

    int** ans = malloc((n - 2) * sizeof(int*));

    for (int i = 0; i < n - 2; i++) {
        ans[i] = malloc((n - 2) * sizeof(int));
        (*returnColumnSizes)[i] = n - 2;

        for (int j = 0; j < n - 2; j++) {

            int max = 0;
            for (int x = i; x < i + 3; x++) {
                for (int y = j; y < j + 3; y++) {
                    if (grid[x][y] > max) {
                        max = grid[x][y];
                    }
                }
            }

            ans[i][j] = max;
        }
    }

    return ans;
}