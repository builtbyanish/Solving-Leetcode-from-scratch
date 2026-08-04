int deleteGreatestValue(int** grid, int gridSize, int* gridColSize) {
    int cols = gridColSize[0];

    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (grid[i][k] > grid[i][k + 1]) {
                    int temp = grid[i][k];
                    grid[i][k] = grid[i][k + 1];
                    grid[i][k + 1] = temp;
                }
            }
        }
    }

    int sum = 0;

    for (int j = 0; j < cols; j++) {
        int max = 0;
        for (int i = 0; i < gridSize; i++) {
            if (grid[i][j] > max) {
                max = grid[i][j];
            }
        }
        sum += max;
    }

    return sum;
}