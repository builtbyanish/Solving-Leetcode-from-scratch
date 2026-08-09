/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned in *returnColumnSizes.
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    
    int **matrix = (int **)malloc(n * sizeof(int *));
    
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    *returnSize = n;

    *returnColumnSizes = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        (*returnColumnSizes)[i] = n;
    }

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {

        for (int j = left; j <= right; j++) {
            matrix[top][j] = num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        for (int j = right; j >= left; j--) {
            matrix[bottom][j] = num++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    return matrix;
}